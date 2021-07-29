#include <stdio.h>
#include <stdbool.h>

int evenorOdd(int n)
{
    if (n % 2 == 0){ return true; }
    return false;
}

int main()
{
    int n, evenorodd;
    printf("enter with the number: ");
    scanf("%d", &n);
    evenorodd = evenorOdd(n);
    printf("The value is Even if 1 or odd if 0.\n");
    printf("The result is: %d\n", evenorodd);
    return 0;
}