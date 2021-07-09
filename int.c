#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(void){

    int i = INT_MAX;

    printf("The i (integer) length is: %zu bytes\n", sizeof(i));

    printf("The i (integer) value is: %d\n", i);
    return 0;
}