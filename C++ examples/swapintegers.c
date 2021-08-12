#include <stdio.h>
#include <stdlib.h>

void swap(int *px, int *py, int temp)
{
    temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);
    swap(&a, &b, temp); // we passed address of the variables
    printf("%d %d\n", a, b);

    return 0;
}