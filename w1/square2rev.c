#include <stdio.h>

int main() {
    int size;
    int z;
    int y;
    
    scanf("%d", &size);
    
    z = size * size;
    y = z;
    
    for ( int i = 0; i < size; i++ ) {
        z -= size;
        z += 1;
        for ( ; z < y; z++ ) {
            printf("%d ", z);
        }
        printf("%d\n", z);
        z -= size;
        y -= size;
    }
    
    return 0;
}
