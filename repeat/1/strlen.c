#include <stdio.h>

#define LIMIT 100

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT+1];
    
    fscanf(in, "%100s", str);
    fclose(in);
    
    fprintf(out, "%d\n", strLen(str));
    fclose(out);
    
    return 0;
}
