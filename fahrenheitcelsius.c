#include <stdio.h>
#include <stdlib.h>

float celsius_to_fahrenheit(float c){

    float f = 1.8 * c + 32;
    return f;
}

int main(void){

    float c, Fahrenheit;
    printf("Enter celsius degrees: ");
    scanf("%f",&c);
    Fahrenheit = celsius_to_fahrenheit(c);
    printf("Fahrenheit Temperature is: %.2f\n", Fahrenheit);
    return 0;
}