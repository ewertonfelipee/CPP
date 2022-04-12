#include <stdio.h>
#include <ctype.h>
#define MAX 30
// non-constant pointer for non-constants data 
void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0'){
        if(islower(*sPtr)){
            *sPtr = toupper(*sPtr); // convert to upper case
        }
        ++sPtr; // advance pointer to next character
    }
}

int main(void)
{
    char string[MAX];
    scanf("Digite uma string: %s", string);
    printf("String before conversion: %s\n", string);
    convertToUppercase(string);
    printf("String after conversion: %s\n", string);
    
    return 0;
}