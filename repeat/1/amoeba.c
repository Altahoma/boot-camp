#include <stdio.h>

int main() {
    int quantity, hours;
    
    scanf("%d %d", &quantity, &hours);
    
    for ( int i = 1; i <= hours; i++ ) {
        quantity *= 2;
        printf("%dh => %d amoeba(s)\n", i, quantity);
    }
    
    return 0;
}
