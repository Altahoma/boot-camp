#include <stdio.h>

int maint() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 10;
    int array[size];
    
    fscanf(in, "%d", array);
    
    fprintf(out, "%d", array);
    
    return 0;
}
