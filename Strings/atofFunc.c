// Converte seu argumento - uma string que representa um numero em ponto flutuante
// - em um valor double

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double d = atof("30.0");
    printf("%.3f\n", d);
}