#include <stdio.h>

void modulo() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", a%b);
}

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    printf("{");
    for ( int i = 0; i < last; i++ ) {
        printf("%d, ", array[i]);
    }
    printf("%d}\n", array[last]);
}

void arrayShift(int array[], int size, int shift) {
    int diff;
    
    shift = shift % size;
    
    if ( shift < 0 ) {
        shift += size;
    }
    
    diff = size - shift;
    
    if ( diff > shift ) {
        int buffer[shift];
        
        for ( int i = diff, j = 0; i < size; i++, j++ ) {
            buffer[j] = array[i];
        }
        for ( int i = diff - 1, j = size - 1; i >= 0; i--, j-- ) {
            array[j] = array[i];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = buffer[i];
        }
    } else {
        int buffer[diff];
        
        for ( int i = 0; i < diff; i++ ) {
            buffer[i] = array[i];
        }
        for ( int i = 0, j = diff; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = shift, j = 0; i < size; i++, j++ ) {
            array[i] = buffer[j];
        }
    }
}

void arrayShift2(int array[], int size, int shift) {
    shift = shift % size;
    
    if ( shift < 0 ) {
        shift += size;
    }
    if ( size - shift > shift ) {
        int buffer[shift];
        int last = size - shift;
        
        for ( int i = size - shift, j = 0; i < size; i++, j++ ) {
            buffer[j] = array[i];
        }
        arrayPrint(buffer, shift);
        
        for ( int i = last - 1; i >= 0; i-- ) {
            array[i+shift] = array[i];
        }
        arrayPrint(array, size);
        
        for ( int i = 0; i < shift; i++ ) {
            array[i] = buffer[i];
        }
        arrayPrint(array, size);
        
        printf(">>>%d\n", size - shift);
    } else {
        int lenght = size - shift;
        int buffer[lenght];
        printf("lenght=%d\n", lenght);
        
        for ( int i = 0; i < lenght; i++ ) {
            buffer[i] = array[i];
        }
        arrayPrint(buffer, lenght);
        
        for ( int i = 0; i < shift; i++ ) {
            array[i] = array[i+lenght];
        }
        arrayPrint(array, size);
        
        for ( int i = shift, j = 0; i < size; i++, j++ ) {
            array[i] = buffer[j];
        }
        arrayPrint(array, size);
        
        printf("<<<%d\n", size - shift);
    }
    
    printf("shift=%d\n", shift);
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int shift = -1;
    
    // modulo();
    arrayShift2(array, size, shift);
    
    return 0;
}