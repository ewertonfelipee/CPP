#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y)
{
    if(x % y == 0) return y;
    else return mdc(y, x % y);
}

int main(void)
{
    int x, y, z;
    printf("enter with values: ");
    scanf("%d %d", &x, &y);
    z = mdc(x, y);
    printf("%d\n", z);
    return 0;
}