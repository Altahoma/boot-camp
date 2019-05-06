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

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0, counter = size - 1; row < size; row++, counter-- ) {
        for ( int col = 0; col < size; col++ ) {
            target[row][col] = source[col][counter];
        }
    }
}

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0, rot = size - 1; row < size; row++, rot-- ) {
        for ( int col = 0, counter = size - 1; col < size; col++, counter-- ) {
            target[row][col] = source[rot][counter];
        }
    }
}

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, counter = size - 1; col < size; col++, counter-- ) {
            target[row][col] = source[counter][row];
        }
    }
}

int main() {
    int source[SIZE][SIZE] = {1, 6, 11, 16, 21, 2, 7, 12, 17, 22, 3, 8, 13, 18, 23, 4, 9, 14, 19, 24, 5, 10, 15, 20, 25};
    int target[SIZE][SIZE];
    
    matrixPrint(source, SIZE);
    printf("\n");
    
    matrixRotate180(target, source, SIZE);
    matrixPrint(target, SIZE);
    
    return 0;
}
