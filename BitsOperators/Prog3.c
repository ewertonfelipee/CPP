#include <stdio.h>
#include <limits.h>

void displayBits(unsigned value);

int main()
{
    unsigned number1;
    unsigned shift;

    printf("Digite o valor de number1: ");
    scanf("%u", &number1);
    printf("Digite o valor de shift: ");
    scanf("%u", &shift);
    if(shift > number1){
        printf("Error! Digite Number1 maior que shift\n");
    }
    else{
        printf("\nO resultado do deslocamento a esqerda de \n");
        displayBits(number1);
        printf("por 8 posicoes de bit usando o ");
        printf("operador de deslocamento a esquerda << eh\n");
        displayBits(number1 << shift);

        //desmostra deslocamento a direita sobre bits
        printf("O resultado do deslocamento a direita de\n");
        displayBits(number1);
        printf("por 8 posicoes de bit usando o ");
        printf("operador de deslocamento a direita >> eh\n");
        displayBits(number1 >> shift);
    }
    return 0;
}

void displayBits(unsigned value)
{
    unsigned c; // counter

    // declares displayBits and shift 31 bits to left
    // CHAR_BIT number of bits in a byte
    unsigned displayMask = 1 << CHAR_BIT * sizeof(unsigned) - 1;
    printf("%7u = ", value);

    for(c = 1; c <= CHAR_BIT * sizeof(unsigned); c++){
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // shift value to left at 1 | value = value << 1

        if(c % 8 == 0){
            putchar(' ');
        }
    }

    putchar('\n');
}