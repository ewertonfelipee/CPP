#include <stdio.h>

int factorial(int n)
{
    int f = 1;
    for(int i = 2; i <= n; ++i){
        f *= i;
    }

    return f;
}

int main(void){

    int x, fac;

    printf("Enter the value: ");

    scanf("%d", &x);

    fac = factorial(x);

    printf("factorial is: %d\n", fac);

    return 0;
}