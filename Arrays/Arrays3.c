#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(int argc, char **argv)
{
    int a[SIZE];
    register int i;
    register int total = 0;

    for(i = 0; i < SIZE; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < SIZE; i++){
        total += a[i]; // makes total
    }

    printf("total: %d\n", total);

    return 0;
}