#include <stdio.h>

int main() {
    int number;
    int divisor = 0;
    
    scanf("%d", &number);
    
    for ( int i = 1; i <= number; i++ ) {
        if ( number % i == 0 ) {
            divisor += 1;
        }
    }
    printf("%d\n", divisor);
    
    return 0;
}
