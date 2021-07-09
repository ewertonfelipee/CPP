#include <stdio.h>
#include <stdlib.h>

int sumprod(int a, int b, int *s, int *p){

    *s = a + b;
    *p = a * b;
}

int main(void){

    int s, p;
    sumprod(3, 5, &s, &p);
    printf("Sum = %d and Product = %d\n", s, p);
    return 0;
}