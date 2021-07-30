#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int prime(int num)
{
    int count=0;
    for(int i=1; i<=num; i++) {
        if(num%i==0)
            count++;
    }
    if(count==2){return 1;} 
    else {return 0;}
}

int main ()
{

    int num,j, value;
    printf("prime numbers until: ");
    scanf("%d", &value);
    for(j=0; j <= value; j++) {
        if(prime(j)==1) {
            printf("%d\n", j);
        }
    }
}

// int rep( int n)
// {
//     for(int i = 0; i < n; ++i){
//         printf("%d\n", i);
//     }
// }

// int main()
// {
//     int x;
//     scanf("%d", &x);
//     printf("%d\n", rep(x));
// }
