#include <stdio.h>

int gcd(int m, int n) {
    if ( n == 0 ) {
        return m;
    }
    return gcd(n, m%n);
}

int main() {
    int min, max, m, n;
    int lcm;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    lcm = m * (n / gcd(m, n));
    
    if ( min % lcm > 0 ) {
        min += lcm;
    }
    
    min -= min % lcm;
    
    for ( int i = min; i <= max; i += lcm ) {
        printf("%d\n", i);
    }
    
    return 0;
}
