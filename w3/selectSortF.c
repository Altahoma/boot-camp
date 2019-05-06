#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = array[i];
        
        for ( int j = 1; j < size; j++ ) {
            if ( array[j] < min ) {
                array[i] = array[j];
                array[j] = array[i];
                min = array[j];
            }
        }
    }
}

int main() {
    int array[10] = {4, 5, 1, 8, 2, 6, 10, 7, 9, 3};
    int size = 10;
    
    arrayPrint(array, size);
    selectSort(array, size);
    printf("\n");
    arrayPrint(array, size);
    
    return 0;
}
