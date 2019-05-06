#include <stdio.h>

int main() {
    int number, step, quantity;
    
    scanf("%d %d %d", &number, &step, &quantity);
    
    for ( int i = 1; i < quantity; i++ ) {
        printf("%d ", number);
        number += step;
    }
    printf("%d\n", number);
    
    return 0;
}
