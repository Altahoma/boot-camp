#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int i = size; i > 0; i-- ) {
        int number;
        
        scanf("%d", &number);
        
        printf("%d\n", number^42);
    }
    
    return 0;
}
