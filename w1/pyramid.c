#include <stdio.h>

int main() {
    int total, rows, cols;
    
    scanf("%d %d %d", &total, &rows, &cols);
    
    rows += 1;
    cols += 1;
    if ( rows < cols ) {
        rows = cols;
    }
    for ( int row = rows; row <= total; row++ ) {
        for ( int col = cols; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", row);
    }
    
    return 0;
}
