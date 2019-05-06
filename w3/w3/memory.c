#include <stdio.h>
#include <stdlib.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayFill(int array[], long unsigned size) {
    for ( long unsigned i = 0; i < size; i++ ) {
        array[i] = i+1;
    }
}

int main() {
    int *array;
    int *array2;
    const int size = LEN * 2;

    array2 = (int*)calloc(LEN, sizeof(int));
    arrayPrint(array2, LEN);

    array = (int*)malloc(sizeof(int)*LEN);
    arrayPrint(array, LEN);

    free(array);
    free(array2);

    return 0;
}
