// examples that manipulates character chain(strings)
#include <stdio.h>

void print(char* s)
{
    for(int i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}
// this code of piece is analogue the code below
// void print(char* s){ printf("%s\n", s);}
void main()
{
    char s[20];
    scanf("%s", s);
    print(s);
}