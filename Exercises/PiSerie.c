#include <stdio.h>

static float pow_aux(int n)
{
    if(n % 2 == 0){ return 1.0; }
    else{ return -1.0; }
}

float pi_value(int n)
{
    float sum = 0.0;
    for(int i = 0; i < n; i++){ sum += (pow_aux(i) / (2*i+1));}
    return 4*sum;
}

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%.3f\n", pi_value(x));
    return 0;
}