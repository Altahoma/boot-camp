#include <stdio>

int main() {
    int number, base;
    int level = 1;
    
    scanf("%d %d", &number, &base);
    
    for ( ; level < number; level *= base )
}