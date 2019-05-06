#include <stdio.h>

#define LISTSIZE 52

void arrayFill(int list[], int size) {
    for ( int i = 0, j = 97; i < size; i += 2, j++ ) {
        list[i] = j;
        list[i+1] = 0;
    }
}

void arrayPrint(FILE *out, int list[], int size) {
    for ( int i = 0, j = 1; i < size; i += 2, j += 2 ) {
        if ( list[j] > 0 ) {
            fprintf(out, "%c %d\n", list[j-1], list[j]);
        }
    }
}

void charCount(FILE *in, int list[], int size) {
    for ( char temp; fscanf(in, "%c", &temp) == 1; ) {
        if ( temp > 64 && temp < 91 ) {
            temp += 32;
        }
        if ( temp > 96 && temp < 123 ) {
            for ( int i = 0; i < size; i += 2 ) {
                if ( list[i] == temp ) {
                    list[i+1] += 1;
                }
            }
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int list[LISTSIZE];
    
    arrayFill(list, LISTSIZE);
    
    charCount(in, list, LISTSIZE);
    fclose(in);
    
    arrayPrint(out, list, LISTSIZE);
    fclose(out);
    
    return 0;
}
