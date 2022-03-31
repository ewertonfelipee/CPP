#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n[10];
    register int i;

    for (i = 0; i < 10; i++){
        scanf("%d", &n[i]); // array initialization
    }

    printf("Array Position\t\tElement\n");
    for (i = 0; i < 10; i++)
    {
        printf("%7d%21d\n", i, n[ i ] );
    }
    
    return 0;
}