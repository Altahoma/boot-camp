#include <stdio.h>

int main() {
    int size;
    int max;
    
    scanf("%d %d", &size, &max);
    
    for ( int i = 1; i < size; i++ ) {
        int next;
        
        scanf("%d", &next);
        
        if ( next > max ) {
            max = next;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
