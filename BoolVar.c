#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(void){

    bool b;

    b= true;
    printf("The value b is: %i\n", b);

    printf("The b (bool) length is: %lu\n", sizeof(b));

    b= false;
    printf("The value b is: %i\n", b);

    return 0;
}