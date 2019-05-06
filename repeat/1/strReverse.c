#include <stdio.h>

#define LIMIT 100

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

void steReverse(char str[], int size) {
    for ( int lo = 0, hi = size - 1; lo < hi; lo++, hi-- ) {
        char buffer = str[lo];
        
        str[lo] = str[hi];
        str[hi] = buffer;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT+1];
    
    fscanf(in, "%100s", str);
    fclose(in);
    
    steReverse(str, strLen(str));
    
    fprintf(out, "%s\n", str);
    fclose(out);
    
    return 0;
}
