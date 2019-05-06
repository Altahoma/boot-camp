#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int buffer[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] <= array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }
    
    for ( int g = 0, m = lo; g < size; g++, m++ ) {
        array[m] = buffer[g];
    }
}

int main() {
    int array[] = {3, 4, 5, 7, 1, 2, 5, 6, 8, 8, 9, 9, 10};
    int lo = 0;
    int mid = 4;
    int hi = 13;
    int size = 13;
    
    arrayPrint(array, size);
    
    merge(array, lo, mid, hi);
    
    arrayPrint(array, size);
    
    return 0;
}
