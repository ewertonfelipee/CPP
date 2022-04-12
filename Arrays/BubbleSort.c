#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE];
    int pass; /* contador de passada */
    int i; /* contador de comparação */
    int hold; /* variavel local temporária usada para trocar elementos do array */

    for (i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }

    printf("Itens de dados na ordem original\n");

    for(i = 0; i < SIZE; i++){
        printf("%4d", arr[i]);
    }

    /* bubble sort */
    /* loop para controlar número de passadas */
    for(pass = 0; pass < SIZE; pass++){
            /* loop para controlar número de comparações por passada */
        for(i = 0; i < SIZE - 1; i++){
            if(arr[i] > arr[i + 1]){
                hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }

    printf("\nItens de dados em ordem crescente\n");
    /* imprime array ordenado */
    for(i = 0; i < SIZE; i++){
        printf("%4d", arr[i]);
    }

    printf("\n");
    return 0;
}