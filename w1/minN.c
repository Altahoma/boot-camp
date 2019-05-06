#include <stdio.h>

int main() {
    int quantity;
    int min;
    int number;
    
    scanf("%d %d", &quantity, &min);
    
    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &number);
        if ( number < min ) {
            min = number;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
