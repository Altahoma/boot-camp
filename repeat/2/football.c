#include <stdio.h>

int main() {
    int home, away;
    
    scanf("%d %d", &home, &away);
    
    if ( home > away ) {
        printf("Home team wins\n");
    } else if ( away > home ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}
