#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    for ( int i = 1; i <= number; i *= 2 ) {
        if ( number == i ) {
            printf("yes\n");
            return 0;
        }
    }
    printf("no\n");
    
    return 0;
}
