#include <stdlib.h>
#include <stdio.h>

int main(void){

    float f = 1;

    double d = 1;

    printf("The f (float) size is: %zu bytes\n", sizeof f);

    printf("The d (double) size is: %zu bytes\n", sizeof d);

    printf("The f value is: %.2f\n", f);

    return 0;
}