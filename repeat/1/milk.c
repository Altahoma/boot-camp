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

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int minPrice(int amountNeeded, int array[], int size) {
    int price = 0;
    
    if ( amountNeeded > 0 ) {
        
    }
    
    return price;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = intScan(in) * 2;
    int amountNeeded = intScan(in);
    int array[size];
    
    arrayScan(in, array, size);
    arrayPrint(array, size);
    printf("%d\n", minPrice(amountNeeded, array, size));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
