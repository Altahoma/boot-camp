#include <stdio.h>

#define QUANTITY 15000000

void print() {
    for ( int i = 0; i < QUANTITY; i++ ) {
        char symbol = 'a' + i % 26;
        if ( symbol % 2 == 0 ) {
            symbol -= 'a' - 'A';
        }

        if ( symbol == 'a' && i != 0 ) {
            printf(" %c", symbol);
        } else {
            printf("%c", symbol);
        }
        
    }
    printf("\n");
}

void print_buffered() {
    int chunk = (QUANTITY / 10) + 1;
    char buffer[chunk];
    int limit = chunk - 1;
    int flimit = QUANTITY / 26;

    for ( int i = 0, j = 0; i < QUANTITY; i++, j++ ) {
        if ( j == limit ) {
            buffer[limit] = '\0';
            printf("%s", buffer);
            j = 0;
        }

        char symbol = 'a' + i % 26;
        if ( symbol % 2 == 0 ) {
            symbol -= 'a' - 'A';
        }

        if ( i % 26 == 0 && i != 0 ) {
            buffer[j] = ' ';
            j += 1;

            if ( j == limit ) {
                buffer[limit] = '\0';
                printf("%s", buffer);
                j = 0;
            }
        }
        buffer[j] = symbol;
    }

    buffer[flimit] = '\0';
    printf("%s\n", buffer);
}

int main() {
    print_buffered();
    return 0;
}