/*  A funcao strchr procura pela primeira ocorrencia de um caractere em uma string.
    Se o caractere for encontrado, strchr retornara um ponteiro para o caractere na string;
    caso contrario, strchr retornara NULL.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    const char *str = "O futuro eh foda";
    char s = 'u';

    if(strchr(str, s) != NULL){
        printf("\'%c' foi achado em \"%s\".\n", s, str);
    }
    else{
        printf("\'%c' nao foi achado em \"%s\".\n", s, str);
    }
}