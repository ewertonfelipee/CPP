#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){

    int c = a + b;
    return c;
}

int main(void){

    int a, b, c;
    printf("Digite os dois valores: "); scanf("%d %d",&a, &b);
    c = sum(a,b); printf("A soma eh: %d\n", c);
}