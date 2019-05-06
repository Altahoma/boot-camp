#include <stdio.h>

int main() {
    int divisor;
    
    scanf("%d", &divisor);
    
    for ( int i = 2; i < divisor; i++ ) {
        if ( divisor % i == 0 ) {
            printf("%d\n", divisor/i);
            return 0;
        }
    }
    printf("0\n");
    
    return 0;
}
