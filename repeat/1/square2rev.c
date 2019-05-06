#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = size; row > 0; row-- ) {
        int counter = size * row;
        
        for ( int col = size - 1; col > 0; col-- ) {
            printf("%d ", counter-col);
        }
        printf("%d\n", counter);
    }
    
    return 0;
}
