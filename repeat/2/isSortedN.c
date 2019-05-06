#include <stdio.h>

int main() {
    int size, number;
    
    scanf("%d %d", &size, &number);
    
    for ( int i = 1; i < size; i++ ) {
        int next;
        
        scanf("%d", &next);
        
        if ( next < number ) {
            printf("no\n");
            return 0;
        }
        number = next;
    }
    printf("yes\n");
    
    return 0;
}
