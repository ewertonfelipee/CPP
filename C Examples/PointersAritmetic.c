#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int vector[] = {0,1,2,3,4,5,6,7};
    int vector2[] = {0,1,2,3,4,5,6,7,8};
    int *p = vector;
    int *q = vector2;
    int x = 9;
    int z = 12;
    float y = 15.55f;
    int *a = &x;
    int *b = &z;
    float *c = &y;
    printf("%d\n", *a + *b);
    printf("%d\n", *a + (int)*c);
    printf("%d\n", *b + (int)*c);

    if(p < q)
        printf("true\n");
    else
        printf("false\n");


    //printf("%d\n", *p+1);
    printf("%p\n", p);
    printf("%p\n", vector);
    printf("%p\n", p+1);
    printf("%p\n", p+2);
    printf("%p\n", p+3);
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(p));
    return 0;
}