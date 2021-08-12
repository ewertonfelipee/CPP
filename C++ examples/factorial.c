#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n == 0) return 1;
    else return n*factorial(n-1);
}

int main(void)
{
    int n, fac;
    printf("enter with value: ");
    scanf("%d", &n);
    fac = factorial(n);
    printf("the factorial is: %d\n", fac);
    return 0;
}