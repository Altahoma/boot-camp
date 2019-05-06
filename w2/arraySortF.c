#include <stdio.h>

void arraySort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int max = array[i];
        
        for ( int j = 0; j < size; j++ ) {
            if ( array[j] > max ) {
                array[i] = array[j];
                array[j] = max;
                max = array[i];
            }
        }
    }
}


void arraySort2(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = array[i];
        
        for ( int j = 0; j < size; j++ ) {
            if ( array[i] > array[j] ) {
                array[i] = array[j];
                array[j] = min;
                min = array[i];
            }
        }
    }
}

void arraySort3(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int max = array[i];
        
        printf("%d\n", max);
        
        for ( int q = 0; q < size; q++ ) {
        printf("%d ", array[q]);
        }
        printf("\n");
        
        for ( int j = 0; j < size; j++ ) {
            if ( array[j] > max ) {
                array[i] = array[j];
                array[j] = max;
                max = array[i];
            }
            printf("max=%d\n", max);
            for ( int w = 0; w < size; w++ ) {
            printf("%d-", array[w]);
            }
            printf("\n");
        }
    }
}


int main() {
    int array[10] = {4, 5, 1, 8, 2, 6, 10, 7, 9, 3};
    int size = 10;
    
    printf("\n");
    
    arraySort(array, size);
    
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
