#include <stdio.h>
#include <math.h>
int main(void)
{
    int a=0,c,n,d;
    printf("Quantos numeros primos pretende exibir? ");
    scanf("%d",&n);
    d=n*(-1);
    printf("Os primeiros %d numeros primos sao:\n",n);
    do
    {   a++;        
        c=0;
        for(int i=1; i<a; i++)
            if(a%i==0)
            c++;
        if(c==1){
            printf("%d\n",a);
            d++;
        }
    }while(d);
        printf("\n\n");
    return 0;
}            
