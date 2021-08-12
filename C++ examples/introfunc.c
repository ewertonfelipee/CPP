#include <stdio.h>
#include <stdlib.h>

int SomaAUmNumero(int numero, int numeroasersomado){

    return numero + numeroasersomado;
}
int main(){

    int numero, numeroasersomado, somadosnumeros;
    printf("digite um numero: \n");
    scanf("%d",&numero);
    printf("digite um numero a ser somado: \n");
    scanf("%d",&numeroasersomado);
    printf("O resultado eh: %d\n", SomaAUmNumero(numero, numeroasersomado));
    return 0;
}