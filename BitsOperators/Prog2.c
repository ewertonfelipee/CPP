#include <stdio.h>

int main()
{
    unsigned x = 7 << 2;
    unsigned y = 5 >> 1;
    printf("%u\n", x);
    printf("%u\n", y);

    printf("%zu\n", sizeof(unsigned));
}