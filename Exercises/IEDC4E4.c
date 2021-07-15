#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pot(double x, int k)
{
    if(k == 0) return 1;
    else if(k % 2 == 0) return pot(x, k/2)*pot(x, k/2);
    else return x*pot(x, k/2)*pot(x, k/2);
}

int main()
{
    double x;
    int k, y;
    scanf("%lf %d", &x, &k);
    y = pot(x, k);
    printf("rec function: %d\n", y);

    int p = pow(x, k);
    printf("pow func: %d\n", p);
    return 0;
}