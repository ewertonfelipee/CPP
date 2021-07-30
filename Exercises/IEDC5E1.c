#include <stdio.h>
#include <math.h>

//  Greatest common divisor of

int gcd(int x, int y)
{
    while (y != 0){
        int temp = y;
        y = fmod(x,y);
        x = temp;
    }
    return x;
}

int main(void)
{
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    printf("The Greatest Common is: %d\n", gcd(a, b));
    return 0;
}