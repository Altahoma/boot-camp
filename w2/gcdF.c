#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    printf("b=%d\n", b);
    printf("a%%b=%d\n", a%b);
    return gcd(b, a%b);
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", gcd(a, b));
    
    return 0;
}
