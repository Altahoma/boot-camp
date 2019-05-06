#include <stdio.h>

#define SIZE 100

int sequenceLen(FILE *in) {
    int len = 0;
    
    for ( int i; len < SIZE && fscanf(in, "%d", &i) == 1; len++ );
    
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fprintf(out, "%d\n", sequenceLen(in));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
