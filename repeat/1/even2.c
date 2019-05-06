#include <stdio.h>

int main() {
    int first, last;
    
    scanf("%d %d", &first, &last);
    
    if ( first % 2 != 0 ) {
        first += 1;
    }
    if ( last % 2 != 0 ) {
        last -= 1;
    }
    
    for ( int i = first; i < last; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", last);
    
    return 0;
}
