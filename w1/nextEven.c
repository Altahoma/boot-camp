#include <stdio.h>

int main() {
    int even;
    
    scanf("%d", &even);
    
    if ( even % 2 != 0 ) {
        even += 1;
    }
    printf("%d\n", even);
    
    return 0;
}
