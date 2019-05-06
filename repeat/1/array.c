#include <stdio.h>

#define SIZE 10

void arrayScan(FILE *in, int array[], int len) {
    for ( int i = 0; i < len; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int len) {
    int last = len - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    
    arrayScan(in, array, SIZE);
    fclose(in);
    
    arrayPrint(out, array, SIZE);
    fclose(out);
    
    return 0;
}
