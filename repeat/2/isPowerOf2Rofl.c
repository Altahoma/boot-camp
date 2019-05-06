#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    if ( number == 1 || number == 2 || number == 4 || number == 8 || number == 16 || number == 32 || number == 64 || number == 128 || number == 256 || number == 512 || number == 1024 || number == 2048 || number == 4096 || number == 8192 || number == 16384 || number == 32768 || number == 65536 || number == 131072 || number == 262144 || number == 524288 || number == 1048576 || number == 2097152 || number == 4194304 || number == 8388608 || number == 16777216 || number == 33554432 || number == 67108864 || number == 134217728 || number == 268435456 || number == 536870912 || number == 1073741824 || number == 2147483648 ) {
        printf("yes\n");
        return 0;
    }
    printf("no\n");
    
    return 0;
}
