#include <stdio.h>

int findGcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return findGcd(b, a%b);
}

int finfLcm(int a, int b) {
    return a * (b / findGcd(a, b));
}

int main() {
    int min, max, m, n;
    int lcm;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    lcm = finfLcm(m, n);
    
    if ( min % lcm > 0 ) {
        min += lcm;
    }
    min -= min % lcm;
    
    for ( int i = min; i <= max; i += lcm ) {
        printf("%d\n", i);
    }
    
    return 0;
}
