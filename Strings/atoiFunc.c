// converte seu argumento - uma string de digitos que representa um inteiro
// - em um valor int

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *c = "2345";
    int i = atoi(c);
    printf("%d\n", i);
}