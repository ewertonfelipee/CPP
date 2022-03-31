#include <stdio.h>

#define SIZE 5

void tryModifyElement(int e[])
{
    e[0] /= 2;
    e[1] /= 2;
    e[2] /= 2;
}

int main()
{
    int e[] = { 10, 14, 22};
    tryModifyElement(e);
    printf("%d %d %d\n", e[ 0 ], e[ 1 ], e[ 2 ] );

    return 0;
}