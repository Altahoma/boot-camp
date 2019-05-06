#include <stdio.h>

int main() {
    int pass;
    
    for ( int i = 0; i < 5; i++ ) {
        scanf("%d", &pass);
        
        if ( pass == 1488 ) {
            printf("accepted\n");
            return 0;
        } else {
            printf("incorrect password\n");
        }
        if ( i == 4 ) {
            printf("denied\n");
            return 0;
        }
    }
    
    return 0;
}
