#include <stdio.h>
#define SIZE 5

int linearSearch(const int arr[SIZE], int key, int size)
{
    for (int i = 0; i < SIZE; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int arr[SIZE];
    int search_key;

    printf("digite os valores do array: ");
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }

    printf("Digite a chave: ");
    scanf("%d", &search_key);

    if(linearSearch(arr, search_key, SIZE) != -1){
        printf("valor encontrado na posicao: %d\n", linearSearch(arr, search_key, SIZE));
    }
    else{
        printf("valor nao encontrado\n");
    }

    return 0;
}