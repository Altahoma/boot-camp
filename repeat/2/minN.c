#include <stdio.h>

int main() {
    int size;
    int min;
    
    scanf("%d %d", &size, &min);
    
    for ( int i = 1; i < size; i++ ) {
        int next;
        
        scanf("%d", &next);
        
        if ( next < min ) {
            min = next;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
