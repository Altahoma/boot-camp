#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int length = 0;
    int number;
    
    for ( ; fscanf(in, "%d", &number) == 1; ) {
        length += 1;
    }
    
    rewind(in);
    
    for ( int i = 1; i < length; i++ ) {
        fscanf(in, "%d", &number);
        fprintf(out, "%d ", number);
    }
    fscanf(in, "%d", &number);
    fprintf(out, "%d\n", number);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
