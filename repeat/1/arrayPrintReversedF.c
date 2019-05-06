void arrayPrintReversed(int array[], int size) {
    for ( int i = size - 1; 0 < i; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}
