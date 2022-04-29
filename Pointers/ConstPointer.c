#include <stdio.h>

// constant pointer for non-constants data 
int main(void)
{
    int x = 5;
    int y;

    printf("%d\n", x);

    int *const ptr = &x;
    *ptr = 7;

    printf("%d\n", *ptr);

    return 0;
}