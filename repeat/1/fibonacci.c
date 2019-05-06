#include <stdio.h>

int fibonacci(int n) {
    int fibonacci = 1;
    int isNegative = 0;
    
    if ( n == 0 ) {
        return 0;
    }
    if ( n < 0 ) {
        n *= -1;
        isNegative = 1;
    }
    for ( int i = 1, prev = 0; i < n; i++ ) {
        int temp = fibonacci;
        
        fibonacci += prev;
        prev = temp;
    }
    if ( n % 2 == 0 && isNegative == 1 ) {
        fibonacci *= -1;
    }
    return fibonacci;
}

int main() {
    int number;
    
    scanf("%d", &number);
    
    printf("%d\n", fibonacci(number));
    
    return 0;
}
