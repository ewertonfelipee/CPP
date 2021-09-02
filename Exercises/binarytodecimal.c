#include <stdio.h>
#include <math.h>
//using namespace std;

long int convert(int bin)
{
    int dec = 0, i;
    for(i = 0; bin > 0; i++)
    {
        dec = dec + pow(2, i) * (bin % 10);
        bin = bin / 10;
    }
    return dec;
}
int main(void)
{
    int bin;
    printf("\nEnter A Binary Number: ");
    scanf("%d", &bin);
    printf("decimal = %ld\n", convert(bin));
    return 0;
}