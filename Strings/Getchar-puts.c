#include <stdio.h>

int main()
{
    char c; // variavel para manter caractere digitado pelo usuario
    char sentence[80];
    int i = 0;
    puts("digite uma linha de texto: ");
    // usa getchar para ler cada caractere
    // while((c = getchar()) != '\n'){
    //     sentence[i] = c;
    //     i++;
    // }
    for(; (c = getchar())!= '\n'; i++){
        sentence[i] = c;
    }

    sentence[i] = '\0'; // finaliza a string

    puts("\nAlinha digitada foi: ");
    puts(sentence);

    return 0;
}