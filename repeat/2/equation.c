#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    if ( number < 0 ) {
        printf("0\n");
    } else if ( number == 0 ) {
        printf("1\n");
    } else {
        printf("2\n");
    }
    
    return 0;
}
