#include <stdio.h>

int sum(int b) {
    
    return b+10;
}
    
int main() {
    int a;
    
    scanf("%d", &a);
    
    printf("%d\n", sum(a));
    
    return 0;
}
