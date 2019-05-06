#include <stdio.h>

int strLen(char str[]) {
    int size = 0;
    
    for ( ; str[size] != 0; size++ );
    return size;
}

int main() {
    char str[8] = {'1', '2', '3', '4', 'q', 'w', 'e', 'r'};
    
    strLen(str);
    
    for ( int i = 0; i < 8; i++ ) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
