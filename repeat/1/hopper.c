#include <stdio.h>

#define MAX_CELL 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    unsigned long long ways[MAX_CELL];
    int maxJump, cell;
    
    fscanf(in, "%d %d", &maxJump, &cell);
    fclose(in);
    
    for ( int i = 0; i < maxJump && i < cell; i++ ) {
        ways[i] = 1 << i;
    }
    for ( int i = maxJump; i < cell; i++ ) {
        unsigned long long buffer = 0;
        
        for ( int j = i - maxJump; j < i; j++ ) {
            buffer += ways[j];
        }
        ways[i] = buffer;
    }
    
    fprintf(out, "%llu\n", ways[cell-1]);
    fclose(out);
    
    return 0;
}
