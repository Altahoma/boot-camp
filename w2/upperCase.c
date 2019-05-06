#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char a; fscanf(in, "%c", &a) == 1; ) {
        if ( a >= 97 && a <= 122 ) {
            fprintf(out, "%c", a-32);
        } else {
            fprintf(out, "%c", a);
        }
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
