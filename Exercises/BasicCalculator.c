#include <stdio.h>
#include <stdlib.h>

float Calculate(char operator, float number1, float number2)
{
        switch(operator)
        {
            case '+':
                return number1 + number2;
            case '-' :
                return number1 - number2;
            case '*':
                return number1 * number2;
            case '/':
                return number1 / number2;
            default :
                printf("Invalid operator\n");
                break;
            }
        return 0;
}

int main()
{
    float number1, number2;
    char operator;

    printf("Digite um operador: ");
    scanf("%c", &operator);
    printf("Digite um numero: ");
    scanf("%f", &number1);
    printf("Digite um numero: ");
    scanf("%f", &number2);

    float calc = Calculate(operator, number1, number2);

    printf("%.2f\n", calc);
    return 0;
}