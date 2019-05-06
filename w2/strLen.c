#include <stdio.h>

#define LENGTH 101

int strLen(char str[]) {
    int size = 0;
    
    for ( ; str[size] != 0; size++ );
    return size;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LENGTH];
    
    fscanf(in, "%100s", str);
    
    fprintf(out, "%d\n", strLen(str));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
