#include <stdio.h>

int main() {
    int number;
    int error = 0;
    
    scanf("%d", &number);
    
    if ( number % 2 == 0 ) {
        printf("alpha\n");
        error = 1;
    }
    if ( number % 3 == 0 ) {
        printf("bravo\n");
        error = 1;
    }
    if ( number % 5 == 0 ) {
        printf("charlie\n");
        error = 1;
    }
    if ( error == 0 ) {
        printf("zulu\n");
    }
    
    return 0;
}
