#include <stdio.h>

int main() {
    int exponent;
    int power = 1;
    
    scanf("%d", &exponent);
    
    printf("1");
    
    for ( int i = 0; i < exponent; i++ ) {
        power *= 2;
        printf(" %d", power);
    }
    printf("\n");
    
    return 0;
}
