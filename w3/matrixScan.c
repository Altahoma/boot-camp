#include <stdio.h>

#define SIZE 5

void matrixPrint(int matrix[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        int last = size - 1;
        
        printf("[");
        
        for ( int j = 0; j < last; j++ ) {
            printf("%2d, ", matrix[i][j]);
        }
        printf("%2d]\n", matrix[i][last]);
    }
}

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int matrix[SIZE][SIZE];
    int size = 5;
    
    matrixPrint(matrix, size);
    printf("\n");
    
    matrixScan(in, matrix, size);
    
    matrixPrint(matrix, size);
    
    fclose(out);
    
    return 0;
}
