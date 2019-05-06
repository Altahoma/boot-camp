#include <stdio.h>

int main() {
    for ( int i = 5; i > 0; i-- ) {
        int temp;
        
        scanf("%d", &temp);
        
        if ( temp == 1488 ) {
            printf("accepted\n");
            
            return 0;
        } else {
            printf("incorrect password\n");
        }
    }
    printf("denied\n");
    
    return 0;
}
