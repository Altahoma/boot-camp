#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    printf("{");
    for ( int i = 0; i < last; i++ ) {
        printf("%d, ", array[i]);
    }
    printf("%d}\n", array[last]);
}

int arrayUnique(int array[], int size) {
    int current = 1;
    
    for ( int unique = 1; unique < size; ) {
        int uniqueBefore = 1;
        int uniqueAfter = 1;
        
        for ( int sorted = 0; sorted < unique; sorted++ ) {
            if ( array[unique] == array[sorted] ) {
                uniqueBefore = 0;
            }
        }
        if ( uniqueBefore ) {
            // unique += 1;
            current += 1;
        } else {
            // unique += 1;
            
            for ( ; unique < size && uniqueAfter == 1; unique++ ) {
                for ( int j = 0; j < current; j++ ) {
                    if ( array[unique] == array[j] ) {
                        uniqueAfter = 0;
                    }
                }
                if ( uniqueAfter ) {
                    array[current] = array[unique];
                    current += 1;
                    uniqueAfter = 0;
                }
            }
            uniqueAfter = 1;
        }
    }
    
    return current;
}

int arrayUniqueTest(int array[], int size) {
    int current = 1;
    
for ( int unique = 1; unique < size; ) {
        int uniqueBefore = 1;
        int uniqueAfter = 1;
        
        for ( int sorted = 0; sorted < unique; sorted++ ) { // unique заменить на current
            if ( array[unique] == array[sorted] ) {
                uniqueBefore = 0;
            }
        }
        if ( uniqueBefore ) {
            printf("%d\n", unique);
            unique += 1;
            current += 1;
        } else {
            printf("%d warning\n", unique);
            unique += 1;
            
            for ( ; unique < size && uniqueAfter == 1; unique++ ) {
                for ( int j = 0; j < current; j++ ) {
                    if ( array[unique] == array[j] ) {
                        uniqueAfter = 0;
                    }
                }
                if ( uniqueAfter ) {
                    array[current] = array[unique];
                    current += 1;
                    uniqueAfter = 0;
                }
            }
            uniqueAfter = 1;
        }
    }
    printf("current = %d\n", current);
    
    return current;
}

int main() {
    int array[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 5, 4, 3, 2, 1};
    // int array[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    // int array[] = {1, 2, 3, 3, 5, 6, 7, 8, 8, 9};
    int size = 25;
    
    arrayPrint(array, size);
    
    arrayUnique(array, size);
    
    arrayPrint(array, size);
    
    return 0;
}
