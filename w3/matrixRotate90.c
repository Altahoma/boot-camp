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

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, cot = size - 1; col < size; col++, cot-- ) {
            target[row][col] = source[cot][row];
        }
    }
}

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0, cot = size - 1; row < size; row++, cot-- ) {
        for ( int col = 0; col < size; col++ ) {
            target[row][col] = source[col][cot];
        }
    }
}


int main() {
    int source[SIZE][SIZE] = {1, 2 , 3 , 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int target[SIZE][SIZE];
    int size = 5;
    
    matrixPrint(source, size);
    
    matrixRotate90(target, source, size);
    
    printf("\n");
    
    matrixPrint(target, size);
    
    return 0;
}
