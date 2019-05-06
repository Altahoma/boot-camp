#include <stdio.h>

int main() {
    int min, max;
    int cubed;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    // review fail Программу нужно укоротить. Лишние строки: 3.
    for ( int i = min; i < max; i += 2 ) {
        cubed = i * i * i;
        printf("%d ", cubed);
    }
    cubed = max * max * max;
    printf("%d\n", cubed);
    
    return 0;
}
