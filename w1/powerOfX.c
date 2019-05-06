#include <stdio.h>

int main() {
    int number, exponent;
    int power = 1;
    
    scanf("%d %d", &number, &exponent);
    
    printf("1");
    for ( int i = 0; i < exponent; i++ ) {
        power *= number;
        printf(" %d", power);
    }
    printf("\n");
    
    return 0;
}
