#include <stdio.h>

int main() {
    int plain1, plain2, encrypted1, encrypted2, length;
    int keyA, keyB, result;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    keyA = (encrypted2 - encrypted1) / (plain2 - plain1);
    keyB = encrypted1 - plain1 * keyA;
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &result);
        result = (result - keyB) / keyA;
        printf("%d ", result);
    }
    scanf("%d", &result);
    result = (result - keyB) / keyA;
    printf("%d\n", result);
    
    return 0;
}
