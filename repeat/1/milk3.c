#include <stdio.h>

#define LIMIT 1001

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    
    return number;
}

void arrayZeroFill(unsigned long long array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int farmerQuantity = intScan(in);
    int amountNeeded = intScan(in);
    unsigned long long array[LIMIT];
    unsigned long long minPrice = 0;
    unsigned long long amountHave = 0;
    int index = 1000;
    int max = 1;
    
    if ( farmerQuantity == 0 || amountNeeded == 0 ) {
        fprintf(out, "0\n");
        fclose(in);
        fclose(out);
        
        return 0;
    }
    
    arrayZeroFill(array, LIMIT);
    
    for ( int i = 0; i < farmerQuantity; i++ ) {
        int amount;
        int price;
        
        fscanf(in, "%d %d", &amount, &price);
        
        array[price] += amount;
        
        if ( price < index ) {
            index = price;
        }
        
        if ( price > max ) {
            max = price;
        }
    }
    fclose(in);
    
    for ( ; index <= max && amountNeeded > amountHave; index++ ) {
        unsigned long long temp = array[index];
        
        if ( temp > 0 ) {
            minPrice += temp * index;
            amountHave += temp;
        }
    }
    
    if ( amountNeeded < amountHave ) {
        minPrice -= (amountHave - amountNeeded) * (index - 1);
        fprintf(out, "%llu\n", minPrice);
    } else if ( amountNeeded == amountHave ) {
        fprintf(out, "%llu\n", minPrice);
    } else {
        fprintf(out, "0\n");
    }
    fclose(out);
    
    return 0;
}
