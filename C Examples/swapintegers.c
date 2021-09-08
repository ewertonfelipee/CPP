#include <stdio.h>
#include <stdlib.h>

void swap(int *px, int *py, int temp)
{
    temp = *px;
    *px = *py;
    *py = temp;
    printf("within swap function %p %p\n", &px, &py);
}

int main()
{
    int px, py, temp;
    printf("Enter the values: ");
    scanf("%d %d", &px, &py);
    swap(&px, &py, temp); // we passed address of the variables
    printf("Numbers swapped: %d %d\n", px, py);
    printf("within main function %p %p\n", &px, &py);

    return 0;
}