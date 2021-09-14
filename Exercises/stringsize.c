#include <string.h>
#include <stdio.h>

//using strlen function 
int size(char* s)
{
    int length = strlen(s);
    return length;
}

// using counter
// int size (char* s)
// {
//     int n = 0; // counter
//     for(int i = 0; s[i] != '\0'; ++i)
//         n++;
//     return n;
// }
int main(void)
{
    char s[41];
    printf("Enter with the string: ");
    scanf("%40[^\n]", s);
    printf("The string is: %d\n", size(s));
    return 0;
}