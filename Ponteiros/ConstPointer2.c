#include <stdio.h>

// constant pointer for constants data 
int main(void)
{
    int x = 5;

    printf("%d\n", x);

    const int *const ptr = &x;

    printf("%d\n", *ptr);

    return 0;
}
