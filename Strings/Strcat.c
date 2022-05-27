// A função strcat acrescenta seu segundo argumento (uma string) a seu primeiro 
// argumento (um array de caracteres que contém uma string). O primeiro caractere do segundo 
// argumento substitui o nulo (‘\0’), que indica o fim da string no primeiro argumento.

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char str[30] = "Ola, eu sou o ";
    char *str2 = "Ewerton ";
    printf("%s\n", strcat(str, str2));
    printf("%s\n", strncat(str, str2, 4));
}