#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

int equals(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

void print(Point p) {
    printf("(%g, %g)", p.x, p.y);
}

double distance(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}


int main() {
    Point a = {2, 2};
    Point b = {5, 7};

    print(a);
    printf("\n");

    print(b);
    printf("\n");

    
    printf("%s\n", (equals(a, b)) ? "yes" : "no");

    printf("distance: %g\n", distance(a, b));
    
    return 0;
}
