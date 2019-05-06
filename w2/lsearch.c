#include <stdio.h>

int arraySearch(FILE *in, int size, int needle) {
    int a;
    
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &a);
        if ( a == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int needle;
    int size = 100;
    
    fscanf(in, "%d", &needle);
    
    fprintf(out, "%d\n", arraySearch(in, size, needle));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
