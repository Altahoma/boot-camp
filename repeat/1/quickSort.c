#include <stdio.h>

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    
    return number;
}

void arrayScan(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int partition(int array[], int start, int end) {
    int i = start;
    int mid = (start + end) / 2;
    int temp = array[mid];
    int pivot;
    
    array[mid] = array[end];
    array[end] = temp;
    pivot = array[end];
    
    for ( int j = start; j < end; j++ ) {
        if ( array[j] <= pivot ) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i += 1;
        }
    }
    temp = array[i];
    array[i] = array[end];
    array[end] = temp;
    
    return i;
}

void quickSort(int array[], int lo, int hi) {
    if ( lo < hi ) {
        int p = partition(array, lo, hi);
        
        quickSort(array, lo, p-1);
        quickSort(array, p+1, hi);
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = intScan(in);
    int array[size];
    
    arrayScan(in, array, size);
    fclose(in);
    
    quickSort(array, 0, size-1);
    arrayPrint(out, array, size);
    fclose(out);
    
    return 0;
}
