#include <stdio.h>

#define SIZE 5

void matrixPrintZ(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < last; j++ ) {
            fprintf(out, "%d ", matrix[i][j]);
        }
        fprintf(out, "%d\n", matrix[i][last]);
    }
}

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[last][row]);
    }
}

int main() {
    FILE *out = fopen("task.out", "w");
    int source[SIZE][SIZE] = {1, 2 , 3 , 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int size = 5;
    
    matrixPrint(out, source, size);
    
    fclose(out);
    
    return 0;
}
