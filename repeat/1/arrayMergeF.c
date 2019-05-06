#include <stdio.h>

#define SIZE 10

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    printf("{ ");
    for ( int i = 0; i < last; i++ ) {
        printf("%d, ", array[i]);
    }
    printf("%d }\n", array[last]);
}

void arrayMerge(int target[], int scr1[], int len1, int scr2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    for ( ; i < len1 && j < len2; k++ ) {
        if ( scr1[i] <= scr2[j] ) {
            target[k] = scr1[i];
            i += 1;
        } else {
            target[k] = scr2[j];
            j += 1;
        }
    }
    for ( ; i < len1; i++, k++ ) {
        target[k] = scr1[i];
    }
    for ( ; j < len2; j++, k++ ) {
        target[k] = scr2[j];
    }
}

int main() {
    int target[SIZE];
    int scr1[] = {1, 1, 2, 4, 5};
    int scr2[] = {1, 2, 3, 4, 4};
    int len1 = 5;
    int len2 = 5;
    
    arrayPrint(scr1, len1);
    arrayPrint(scr2, len2);
    printf("\n");
    
    arrayMerge3(target, scr1, len1, scr2, len2);
    arrayPrint(target, SIZE);
    
    return 0;
}
