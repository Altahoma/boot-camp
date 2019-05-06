#include <stdio.h>

int main() {
    int min, max;
    int power;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    
    for ( int i = min; i < max; i += 2 ) {
        power = i * i * i;
        printf("%d ", power);
    }
    power = max * max * max;
    printf("%d\n", power);
    
    return 0;
}
