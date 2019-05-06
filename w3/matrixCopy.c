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

void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            target[i][j] = source[i][j];
        }
    }
}

int main() {
    int source[SIZE][SIZE] = {1, 2 , 3 , 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int target[SIZE][SIZE];
    int size = 5;
    
    matrixPrint(source, size);
    
    matrixCopy(target, source, size);
    
    printf("\n");
    
    matrixPrint(target, size);
    
    return 0;
}
