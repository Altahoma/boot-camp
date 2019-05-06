#include <stdio.h>

#define SIZE 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int number;
    int length = 0;
    
    for ( ; length < SIZE && fscanf(in, "%d", &number) == 1; ) {
        length += 1;
    }
    
    fprintf(out, "%d\n", length);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
