#include <stdio.h>

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}

int strEqualTest(char str1[], char str2[]) {
    int size = 0;
    for ( ; size < 7; size++ ) {
        if ( str1[size] == '\0' ) {
            printf("size=%d\n", size);
            return 1;
        }
    }
    printf("size=%d\n", size);
    return 0;
}

int main() {
    char str1[6] = {'1', '2', '3', 'q', 'w', 'e'};
    char str2[6] = {'1', '2', '3', 'q', 'w', 'e'};
    
    
    
    for ( int i = 0; i < 6; i++ ) {
        printf("%c", str1[i]);
    }
    printf("\n");
    
    for ( int i = 0; i < 6; i++ ) {
        printf("%c", str2[i]);
    }
    printf("\n");
    
    printf("%d\n", strEqual(str1, str2));
    
    return 0;
}
