#include <stdio.h>

union number{
    int x;
    double y;
};

int main()
{
    union number value;
    value.x = 10;
    printf("%d\n%.1f\n", value.x, value.y);
    value.y = 100.0;
    printf("%.1f\n%d\n", value.y, value.x);

    return 0;
}