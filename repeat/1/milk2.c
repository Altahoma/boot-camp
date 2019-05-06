#include <stdio.h>

#define LIMIT 1001

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    
    return number;
}

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int minPrice(FILE *in, int amountNeeded) {
    int array[LIMIT];
    int price = 0;
    int minPrice = 0;
    int min = 1000;
    int max = 1;
    
    arrayZeroFill(array, LIMIT);
    
    for ( int amount, price; fscanf(in, "%d %d", &amount, &price) != EOF; ) {
        if ( price < min ) {
            min = price;
        }
        if ( price > max ) {
            max = price;
        }
        
        array[price] += amount;
    }
    
    for ( int i = min; i <= max && amountNeeded > 0; i++ ) {
        if ( array[i] > 0 ) {
            for ( int j = array[i]; j > 0 && amountNeeded > 0; j--, amountNeeded-- ) {
                price += i;
            }
        }
    }
    
    if ( amountNeeded == 0 ) {
        minPrice = price;
    }
    
    return minPrice;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int farmerQuantity = intScan(in);
    int amountNeeded = intScan(in);
    
    if ( farmerQuantity == 0 || amountNeeded == 0 ) {
        fprintf(out, "0\n");
        fclose(in);
        fclose(out);
        
        return 0;
    }
    
    fprintf(out, "%d\n", minPrice(in, amountNeeded));
    fclose(in);
    fclose(out);
    
    return 0;
}
