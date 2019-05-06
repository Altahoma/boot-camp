#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if ( num % 2 != 0 ) {
        num -= 1;
    }
    printf("%d\n", num);
    
    return 0;
}
