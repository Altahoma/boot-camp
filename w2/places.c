#include <stdio.h>

int main() {
    int number;
    int size = 1;
    
    scanf("%d", &number);
    
    if ( number < 0 ) {
        number *= -1;
        size += 1;
    }
    
    for ( int i = number; i > 9; i /= 10 ) {
        size += 1;
    }
    
    printf("%d\n", size);
    
    return 0;
}
