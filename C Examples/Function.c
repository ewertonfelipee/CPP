#include <stdio.h>
#include <stdlib.h>

#if 0
void error(char msg[])
{   // *msg == msg[]
    fprintf(stderr, "Error: %s\n", msg);
    exit(1);
}
#endif

int soma(int n1, int n2)
{
    return n1 + n2;
}
int main(int argc, char **argv)
{
    int n1, n2;
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n1 + n2: %d\n", soma(n1, n2));
    // error("sum failed\n");
    return 0;
}