#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int partition(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;
    int pivot = array[mid];
    int tail = lo;

    array[mid] = array[hi];
    array[hi] = pivot;

    for ( ; array[tail] < array[hi]; tail++ );
    for ( int i = tail + 1; i < hi; i++ ) {
        if ( array[i] < array[hi] ) {
            pivot = array[tail];
            array[tail] = array[i];
            array[i] = pivot;
            tail += 1;
        }
    }

    pivot = array[hi];
    array[hi] = array[tail];
    array[tail] = pivot;

    return tail;
}

void quickSort(int array[], int lo, int hi) {
    int pivot;

    if ( lo < hi ) {
        pivot = partition(array, lo, hi);
        quickSort(array, lo, pivot-1);
        quickSort(array, pivot+1, hi);
    }
}

int main() {
    const int size = 10;
    int array[] = {4, 9, 3, 1, 7, 8, 10, 2, 6, 5};

    quickSort(array, 0, size-1);
    arrayPrint(array, size);

    return 0;
}