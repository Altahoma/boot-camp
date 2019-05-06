#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int last = size - 1;
    int temp = array[last];
    
    for ( int i = last; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = temp;
}

void arrayShiftRight2(int array[], int size) {
    int flag = size - 1;
    int temp = array[flag];
    
    for ( ; flag > 0; flag-- ) {
        array[flag] = array[flag-1];
    }
    array[0] = temp;
}


int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    arrayShiftRight4(array, size);
    
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
