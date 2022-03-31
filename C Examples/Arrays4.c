#include <stdio.h>
#include <stdlib.h>

#define RESPONSE_SIZE 8 /* define tamanhos de array */
#define FREQUENCY_SIZE 11

int main(void)
{
    int answer; /* contador para percorrer 8 respostas */
    int rating; /* contador para percorrer frequências 1-10 */

    /* inicializa contadores de frequência em 0 */
    int frequency[FREQUENCY_SIZE] = { 0 };

    /* coloca as respostas da pesquisa no array responses */

    int responses[RESPONSE_SIZE];

    for (int i = 0; i < RESPONSE_SIZE; i++)
    {
        scanf("%d", &responses[i]);
    }

#if 0
    para cada resposta, seleciona valor de um elemento do array responses
    e usa esse valor como subscrito na frequência do array para
    determinar elemento a ser incrementado
#endif

    for(answer = 0; answer < RESPONSE_SIZE; answer++){
        ++frequency[ responses [ answer ] ];
    }

    /* mostra resultados */
    printf( "%s%17s\n", "Avaliação", "Frequência" );

    /* listas de impressão das frequências em um formato tabular */
    for(rating = 6; rating < FREQUENCY_SIZE; rating++){
        printf( "%6d%17d\n", rating, frequency[ rating ] );
    }

    return 0;
}