#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int x, int y, int z)
{
    int r = x % y;
    int s = y % z;
    if(r == 0) return y;
    else{
        if(s == 0) return z;
        return gcd(z, s, r);
    }

}

int main(void)
{
    int x, y, z, GCD;
    scanf("%d %d %d", &x, &y, &z);
    GCD = gcd(x, y, z);
    printf("the greatest common divisor is: %d\n", GCD);

    return 0;
}