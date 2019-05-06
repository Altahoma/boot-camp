#include <stdio.h>

int binarySequence(FILE *in) {
    int zero = 0;
    int excess = 0;
    
    for ( char temp; fscanf(in, "%c", &temp) == 1; ) {
        if ( temp == 48 ) {
            zero += 1;
        }
    }
    rewind(in);
    for ( int i = 0; i < zero; i++ ) {
        char temp;
        
        fscanf(in, "%c", &temp);
        
        if ( temp == 48 ) {
            excess += 1;
        }
    }
    
    return zero - excess;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fprintf(out, "%d\n", binarySequence(in));
    fclose(in);
    fclose(out);
    
    return 0;
}
