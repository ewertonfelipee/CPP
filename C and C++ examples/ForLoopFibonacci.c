#include <stdio.h>

int fib(int n)
{
    if (n < 2){ return n; }
    else{
        int a = 0, b = 1;
        for(int i = 2; i <= n; ++i){
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main(void)
{
    int x;
    printf("Enter fib: ");
    scanf("%d", &x);
    printf("%d\n", fib(x));
    return 0;
}