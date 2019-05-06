#include <stdio.h>

int sizeOf(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    
    return size;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = sizeOf(in);
    int array[size];
    int last;
    
    last = size - 1;
    
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
    fclose(in);
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
    fclose(out);
    
    return 0;
}
