#include <stdio.h>

int main() {
    int number, base;
    int power = 1;
    
    scanf("%d %d", &number, &base);
    
    for ( int tmp = number / base; power <= tmp; power *= base );
    
    printf("%d\n", power);
    
    
    return 0;
}
