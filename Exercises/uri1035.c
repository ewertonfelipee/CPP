#include <stdio.h>
 
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int SumCD = c + d, SumAB = a + b;
    if((b > c) && (d > a) && (SumCD > SumAB) && (c && d) > 0 && a%2==0){
        printf("Valores aceitos\n");
    }
    else {printf("Valores nao aceitos\n");}
    return 0;
}
