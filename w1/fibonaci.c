#include <stdio.h>

int fibonaci(int n) {
    if ( n == 0 ) {
        return 0;
    }
    if ( n == 1) {
        return 1;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", );
    
    return 0;
}
