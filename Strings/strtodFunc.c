//  Converte uma sequencia de caracteres que representam um valor de ponto
//  flutuante em double.
//  A funcao recebe dois argumentos - uma string e um ponteiro para string.
//  A string contem a sequencia de caracteres a ser convertida em double.
/*  O ponteiro recebe o endereço do lugar ocupado pelo caractere que vem imediatamente após
    a parte convertida da string
*/
//  function signature: strtod(string, &stringPtr);

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const char *c = "51.2% are admitted";
    char *s;
    double d = strtod(c, &s);
    printf("%s\n", c);
    printf("%.2f\n", d);
    printf("%s\n", s);
}