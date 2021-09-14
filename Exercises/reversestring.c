#include <stdio.h>
#include <string.h>

int reverse(char* s1)
{
    int length = strlen(s1);
    for(int i = length - 1; i >= 0; i--)
        printf("%c", s1[i]);
}

int main(void)
{
    char s1[20];
    printf("Enter the string to be reverse: ");
    scanf("%s", s1);
    reverse(s1);
    printf("\n");
    return 0;
}