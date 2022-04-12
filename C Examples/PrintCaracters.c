#include <stdio.h>

// read-only function. It cannot modify the character it points to.
// non-constant pointer  for constants data 
void printCaracteres(const char *sPtr)
{
    while(*sPtr != '\0'){
        printf("%c", *sPtr);
        sPtr++;
    }
}

int main(void)
{
    char string[100];

    printf("The String is: ");

    scanf("%s", string);
    printCaracteres(string);
    printf("\n");

    return 0;
}