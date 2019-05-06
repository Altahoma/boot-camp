#include <stdio.h>

int main() {
    int number;
    char size = 0;
    
    scanf("%d", &number);
    
    for ( ; scanf("%c") == 1; size += 1 )
    
    printf("%d\n", number);
    
    return 0;
}
