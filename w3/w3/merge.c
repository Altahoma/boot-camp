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

    for ( int i = 0, j = lo; i < size; i++, j++ ) {
        array[j] = buffer[i];
    }
}




int main() {
    const int size = 10;
    int array[] = {1, 3, 7, 6, 9, 2, 4, 6, 8, 10};

    arrayPrint(array, size);
    merge(array, 0, 3, 4);
    arrayPrint(array, size);


    return 0;
}
