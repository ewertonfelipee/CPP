#include <stdio.h>

size_t getSize(float *ptr)
{
    return sizeof(ptr);
}

int main(void)
{
    float array[20];
    printf("O numero de bytes no array eh %ld"
            "\nO numero de bytes retornados por getSize eh %ld\n",
            sizeof(array), getSize(array));


    // Expressao determina o numero de elementos do array
    printf("%zu\n", sizeof(array)/sizeof(*array)); 
    return 0;
}