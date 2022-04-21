#include <stdio.h>
#include <string.h>
#define SIZE 80

void reverse(const char * const str)
{
    if(str[0] == '\0'){
        return;
    }
    else{
        reverse(&str[1]);
        putchar(str[0]);
    }
}

int main()
{
    char sentence[SIZE];
    printf("digite uma linha de texto: \n");
    fgets(sentence, SIZE, stdin);
    printf("\nA linha impresssa na ordem inversa eh:\n");
    reverse(sentence);
    printf("\n");

    return 0;
}