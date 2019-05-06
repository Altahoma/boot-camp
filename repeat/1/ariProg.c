#include <stdio.h>

int main() {
    int prog, step, size;
    
    scanf("%d %d %d", &prog, &step, &size);
    
    for ( int i = 1; i < size; i++ ) {
        printf("%d ", prog);
        prog += step;
    }
    printf("%d\n", prog);
    
    return 0;
}

#include <stdio.h>

int main() {
    int first, step, size;
    int prog;
    
    scanf("%d %d %d", &first, &step, &size);
    
    prog = first;
    for ( int i = 1; i < size; i++ ) {
        printf("%d ", prog);
        prog += step;
    }
    printf("%d\n", prog);
    
    return 0;
}
