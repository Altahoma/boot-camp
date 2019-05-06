#include <stdio.h>

int main() {
    int size, max;
    int next;
    int isYes = 1;
    
    scanf("%d %d", &size, &max);
    
    for ( int i = 1; i < size; i++ ) {
        scanf("%d", &next);
        
        if ( next >= max ) {
            isYes += 1;
            max = next;
        }
    }
    
    if ( isYes == size ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
