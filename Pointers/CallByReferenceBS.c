// Bubble Sort using Call by reference.

#include <stdio.h>

#define SIZE 5

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int * const array, const int size)
{
    int i, j;

    // controla as passadas pelo array
    for(i = 0; i < size - 1; i++){
        // controla as comparações durante cada passada
        for(j = 0; j < size - 1; j++){
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main(void)
{
    int array[SIZE] = {54, 23, 99, 0, 10};
    int i;

    printf("Elementos na ordem original\n");
    for(i = 0;i < SIZE; i++){
        printf("%4d ", array[i]);
    }

    //printf("\n");
    BubbleSort(array, SIZE);

    printf("\nElementos ordenados\n");
    for(i = 0; i < SIZE; i++){
        printf("%4d ", array[i]);
    }

    printf("\n");
    return 0;
}

