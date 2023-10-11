#include <stdio.h>

// a basic usage of Recursion, collatz conjecture??
int algo(int n) {
    printf("%d ", n);
    if (n == 1) {
        return 0;
    }

    if (n % 2 == 0) {
        algo(n / 2);
    }

    else {
        algo(n*3 + 1);
    }
}

int main(){
    // tests
    algo(3);
    algo(5);
}
