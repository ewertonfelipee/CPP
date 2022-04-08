#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *p, a = 2, b;
    p = &a; // p points to a
    printf("'a' before: %d\n", a);
    *p = 3;
    printf("'a' after: %d\n", a);
    b = a + (*p);
    printf("%d %d\n", *p, b);
    return 0;
}