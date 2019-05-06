#include <stdio.h>

void sliceReverse(int array[], int lo, int hi) {
for ( ; lo < hi; lo++, hi-- ) {
        int temp = array[lo];
        
        array[lo] = array[hi];
        array[hi] = temp;
    }
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = 10;
    int lo = 4;
    int hi = 9;
    
    for ( int i = 0; i < len; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    sliceReverse(array, lo, hi);
    
    for ( int i = 0; i < len; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
