#include <stdio.h>

// Function data types
// typedef <type size> <type definition>;
// (*<type name>) '*' because function type is a pointer
typedef int (*function)(int, int); // user type named as 'function'
typedef int (*function2)(int); // user type named as 'function2'

enum CONDITIONS {
    SUM = 1,
    DIFF,
    MULT
};

int sum(int x, int y) {
    return x + y;
}

int mult(int x, int y) {
    return x * y;
}

int diff(int x, int y) {
    return x - y;
}

int notImplemented(int x, int y) {
    printf("Not Implemented Error\n");
    return (int)NULL;
}

int increment(int x) {
    return x + 1;
}

int powOf2(int x) {
    return 1 << x;
}

int reduce(function handler, int array[], int size) {
    int result = array[0];

    for ( int i = 1; i < size; i++ ) {
        result = handler(result, array[i]);
    }
    return result;
}

void map(function2 handler, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = handler(array[i]);
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = i + 1;
    }
}

// Function to produce another functions
function factory(int condition) {
    switch ( condition ) {
        case SUM:
            return sum;
        case DIFF:
            return diff;
        case MULT:
            return mult;
        default:
            return notImplemented;
    }
}


int main() {
    const int size = 10;
    int array[size];

    for ( ; ; ) {
        int condition;
        int x, y;

        printf("Choose operation: \n");
        printf("    %d: sum\n", SUM);
        printf("    %d: diff\n", DIFF);
        printf("    %d: mult\n\n", MULT);

        scanf("%d", &condition);

        printf("Type two digits: \n");
        scanf("%d %d", &x, &y);

        printf("Result: %d\n", factory(condition)(x, y));
        printf("\n************\n\n");
    }

    // function farray[] = {sum, diff, mult};
    // for ( int i = 0; i < 3; i++ ) {
    //     printf("%d\n", farray[i](10, 20));
    // }

    // Reduce
    // printf("%d\n", reduce(sum, array, size));
    // printf("%d\n", reduce(diff, array, size));
    // printf("%d\n", reduce(mult, array, size));

    // Map
    // arrayFill(array, size);
    // arrayPrint(array, size);

    // map(increment, array, size);
    // arrayPrint(array, size);
    // arrayFill(array, size);

    // map(powOf2, array, size);
    // arrayPrint(array, size);
    // arrayFill(array, size);
    
    // arrayPrint(array, size);

    return 0;
}
