#include <stdio.h>


int factorial(int n) {
    if ( n == 0 ) {
        return 1;
    }
    if ( n < 0 ) {
        return -1;
    }
    return n * factorial(n-1);
}


int factorial(int n) {
    if ( n > 1 ) {
        return n * factorial(n-1);
    }
    if ( n < 0 ) {
        return -1;
    }
    return 1;
}

int factorial(int n) {
    if ( n == 0 ) {
        return 1;
    }
    if ( n < 0 ) {
        return -1;
    }
    return n * factorial(n-1);
}

int main() {
    int number;
    
    scanf("%d", &number);
    
    printf("%d\n", factorial(number));
}