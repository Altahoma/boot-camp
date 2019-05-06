#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    max -= max % 2;
    if ( min % 2 != 0 ) {
        min += 1;
    }
    
    for ( int i = min; i < max; i += 2 ) {
        printf("%d ", i*i);
    }
    printf("%d\n", max*max);
    
    return 0;
}
