#include <stdio.h>

int main() {
    int lenght, sequence;
    
    scanf("%d", &lenght);
    
    for ( int i = 0; i < lenght; i++ ) {
        scanf("%d", &sequence);
        printf("%d\n", sequence^42);
    }
    
    return 0;
}
