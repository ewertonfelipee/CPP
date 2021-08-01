#include <stdio.h>

int main() {
    
    int x; float y;// x is total distance and y is total gas expense in L
    scanf("%d", &x);scanf("%f", &y);
    printf("%.3f km/l", x / y);
    return 0;
}
