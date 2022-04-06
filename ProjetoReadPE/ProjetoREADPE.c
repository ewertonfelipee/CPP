#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

// neste programa contem conceitos de manuseamento de arquivos


void fatalERROR(char *msg) // criar uma func desse tipo eh uma boa pratica para impressao de erros
{
    fprintf(stderr, "Error: %s\n", msg); // se tiver sucesso cai no primeiro if da main
    exit(1); // usado para acusar nao-sucesso em c
}

void usage(void)
{
    printf("Uso:\n\treadpe <arquivo.exe>\n");
    exit(1);
}

int main(int argc, char **argv)
{
    FILE *file;
    unsigned char buffer[32];

    if(argc != 2) {
        usage();
    }

    file = fopen(argv[1], "rb");

    if(file == NULL) {
        fatalERROR("arquivo nao encontrado ou sem permissao de leitura");
    }

    if(fread(buffer, 32, 1, file) != 1) {
        fatalERROR("nao consegui ler os 32 bytes do arquivo");
    };

    fclose(file);

    if(!petest_isPE(buffer))
        fatalERROR("arquivo nao parece ser um executavel PE");

    return 0;
}