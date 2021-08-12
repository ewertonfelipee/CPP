#include <stdio.h>

int factorial(int n, int f)
{
    f = 1;
    while (n > 1){
        f *= n;
        --n;
    }
    return f;
}

int main(void){

    int x, y, fac;

    printf("Enter the value: ");

    scanf("%d", &x);

    fac = factorial(x, y);

    printf("factorial is: %d\n", fac);

    return 0;
}