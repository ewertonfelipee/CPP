#include <stdio.h>
#define SIZE 15

int binarySearch(const int b[], int search_key, int low, int high)
{
    int mid;
    while(low <= high) {
        mid = (low + high)/2;

        if(search_key == b[mid]) {
            return mid;
        }

        else if(search_key < b[mid]) {
            high = mid -1;
        }

        else{
            low = mid + 1;
        }
    }
}

int main(void)
{
    int arr[SIZE];
    int key;
    int result;

    for(int i = 0; i < SIZE; i++){
        arr[i] = 2 * i;
    }

    scanf("%d", &key);

    result = binarySearch(arr, key, 0, SIZE - 1);

    if(result != -1){
        printf("\n%d encontrado na posicao de array %d\n", key, result);
    }

    else{
        printf("\n%d nao encontrados\n", key);
    }

    return 0;
}