#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
    unsigned char c[3];

    printf("The 'c' size is: %zu\n", sizeof(c));

    printf("The 'c' elements number is: %zu\n\n", sizeof(c) / sizeof(c[0]));

    c[0] = 'A';
    c[1] = 0x42;
    c[2] = 67;

    printf("The element 'c' of 0 is: %c\n", c[0]);
    printf("The element 'c' of 1 is: %c\n", c[1]);
    printf("The element 'c' of 2 is: %c\n\n", c[2]);

    printf("The element 'c' of 0 is: %d\n", c[0]);
    printf("The element 'c' of 1 is: %d\n", c[1]);
    printf("The element 'c' of 2 is: %d\n", c[2]);
    return 0;
}