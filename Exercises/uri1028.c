#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y)
{
    int r = x % y;
    if(r == 0) return y;
    else return mdc(y, r);
}

int main(void)
{
    int x, y, z, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        z = mdc(x, y);
        printf("%d\n", z);
    }
    return 0;
}
