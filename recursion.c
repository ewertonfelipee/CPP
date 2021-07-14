#include <stdio.h>
#include <stdlib.h>

void function(int n)
{
    printf("%d ", n);
    if (n > 0){
        function(n-1);
        printf("* ");
    }
}

int main(void)
{
    int n;
    printf("enter with n value: ");
    scanf("%d", &n);
    function(n);
    return 0;
}