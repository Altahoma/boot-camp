#include <stdio.h>

int main() {
    int number;
    int divisors = 0;
    
    scanf("%d", &number);
    
    for ( int i = 1; i <= number; i++ ) {
        if ( number % i == 0 ) {
            divisors += 1;
        }
    }
    printf("%d\n", divisors);
    
    return 0;
}
