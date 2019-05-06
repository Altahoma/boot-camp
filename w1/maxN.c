#include <stdio.h>

int main() {
    int quantity;
    int max;
    int number;
    
    scanf("%d %d", &quantity, &max);
    
    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &number);
        if ( number > max ) {
            max = number;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
