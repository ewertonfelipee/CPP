#include <stdlib.h>
#include <stdio.h>

int main(void){
    char c;

    printf("The c (char) length is: %zu bytes and %zu bits.\n", sizeof(c), sizeof(c)*8);
    
    c = 255;
    printf("The c value is: %i\n", c);

    c = 127;
    printf("The c value is: %i\n", c);

    c = 128;
    printf("The c value is: %i\n", c);

    unsigned char character;

    character = 255;
    printf("The character value is: %i\n", character);

    character = 127;
    printf("The character value is: %i\n", character);

    character = 128;
    printf("The character value is: %i\n", character);

    return 0;
}