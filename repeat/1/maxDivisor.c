#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    for ( int i = 2; i < number; i++ ) {
        if ( number % i == 0 ) {
            printf("%d\n", number/i);
            return 0;
        }
    }
    printf("0\n");
    
    return 0;
}
