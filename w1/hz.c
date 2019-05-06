#include <stdio.h>

void printSquare(int size) {
    for ( int rows = 0, counter = 1; rows < size; rows++ ) {
        for ( int cols = 0; cols < size -1; cols++ ) {
            printf("%d ", counter);
            counter +=1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
}

void printPiramid(int size) {
    for ( int i = 0, counter = 1; 1 < size; i++ ) {
        printf("%d ", counter);
        counter += 1;
    }
    printf("%d\n", counter);
    counter +=1;
}