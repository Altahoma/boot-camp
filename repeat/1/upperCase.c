#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char i; fscanf(in, "%c", &i) == 1; ) {
        if ( i > 96 && i < 123 ) {
            i -= 32;
        }
        fprintf(out, "%c", i);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    
    return 0;
}
