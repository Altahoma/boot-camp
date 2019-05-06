#include <stdio.h>

#define LENGTH 101

void arrayScan(FILE *in, char array[]) {
    fscanf(in, "%100s", array);
}

void strRot13(char str[]) {
    for ( int i = 0, temp = str[0]; temp != '\0'; i++ ) {
        temp = str[i];
        
        if ( temp >= 65 && temp <= 77 ) {
            str[i] += 13;
        } else if ( temp >= 78 && temp <= 90 ) {
            str[i] -= 13;
        } else if ( temp >= 97 && temp <= 109 ) {
            str[i] += 13;
        } else if ( temp >= 110 && temp <= 122 ) {
            str[i] -= 13;
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char array[LENGTH];
    
    arrayScan(in, array);
    fclose(in);
    
    strRot13(array);
    
    fprintf(out, "%s", array);
    fprintf(out, "\n");
    fclose(out);
    
    return 0;
}
