#include <stdio.h>

void arrayExchange(int array[], int len) {
    for ( int i = 1, j = 0; i < len; i += 2, j += 2 ) {
        int temp = array[j];
        
        array[j] = array[i];
        array[i] = temp;
    }
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = 10;
    
    for ( int i = 0; i < len; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    arrayExchange(array, len);
    
    for ( int i = 0; i < len; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
