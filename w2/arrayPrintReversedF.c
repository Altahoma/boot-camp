#include <stdio.h>

void arrayPrintReversed(int array[], int size) {
    for ( int last = size - 1; last > 0; last -= 1 ) {
        printf("%d ", array[last]);
    }
    printf("%d\n", array[0]);
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    
    arrayPrintReversed(array, size);
    
    return 0;
}