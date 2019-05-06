#include <stdio.h>

int main() {
    int base, index;
    int power = 1;
    
    scanf("%d %d", &base, &index);
    
    for ( int i = 0; i < index; i++ ) {
        printf("%d ", power);
        power *= base;
    }
    printf("%d\n", power);
    
    return 0;
}
