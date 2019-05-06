#include <stdio.h>

#define LENGTH 101

int strLen(char str[]) {
    int size = 0;
    
    for ( ; str[size] != 0; size++ );
    return size;
}

void arrayReverse(char array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int temp = array[i];
        
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LENGTH];
    
    fscanf(in, "%100s", str);
    arrayReverse(str, strLen(str));
    
    fprintf(out, "%s", str);
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
