#include <stdio.h>

int main() {
    int limit;
    
    scanf("%d", &limit);
    
    if ( limit % 2 == 0 ) {
        limit -= 1;
    }
    
    for ( int i = 1; i < limit; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", limit);
    
    return 0;
}
