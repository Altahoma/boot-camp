#include <stdio.h>

int main() {
    int quantity;
    int number;
    int max;
    
    scanf("%d %d", &quantity, &max);
    
    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &number);
        if ( number >= max ) {
            max = number;
        } else {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    
    return 0;
}
