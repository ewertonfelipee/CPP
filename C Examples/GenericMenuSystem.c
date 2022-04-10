#include <stdio.h>

void func1(int a)
{
    printf("Você digitou %d, de modo que function1 foi chamada\n\n", a);
}

void func2(int b)
{
    printf("Você digitou %d, de modo que function2 foi chamada\n\n", b);
}

void func3(int c)
{
    printf("Você digitou %d, de modo que function3 foi chamada\n\n", c);
}

int main(void)
{
    void (*f[3])(int) = {func1, func2, func3};

    int choice;
    printf("Digite um número entre 0 e 2, 3 para sair: ");
    scanf("%d", &choice);
    
    while(choice >= 0 && choice < 3){

        (*f[choice])(choice);

        printf("Digite um número entre 0 e 2, 3 para terminar: ");
        scanf("%d", &choice);
    }
    printf("Execução do programa concluída.\n");

    return 0;
}