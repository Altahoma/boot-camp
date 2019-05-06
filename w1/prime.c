#include <stdio.h>

int isPrime(int n) {
    if ( n < 2 ) {
        return 0;
    }
    if ( n == 2 ) {
        return 1;
    }
    for ( int i = 2; i*i <= n; i++ ) {
//        printf("%d\n", i);
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int serial;
    int prime = 2;
    
    scanf("%d", &serial);
    
    if ( serial <= 0 ) {
        printf("-1\n");
        return 0;
    }
    
    for ( int counter = 0; counter < serial; prime++ ) {
        counter += isPrime(prime);
    }
    
    printf("%d\n", prime-1);
    
    return 0;
}
