#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    

    if ( number == 1 ) {
        printf("yes\n");
        return 0;
    }
    
    if ( number % 2 != 0 ) {
        printf("no\n");
        return 0;
    }
    
    for ( int i = number; i != 2; ) {
        i /= 2;
        
        if ( i % 2 != 0 ) {
            printf("no\n");
            return 0;
        }
    }
    
    printf("yes\n");
    
    return 0;
}
