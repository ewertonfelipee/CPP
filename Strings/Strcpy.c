#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// s1 is the string to be copied
// s2 is where the content will be copied
// Array version
// void strcp(char *s1, char *s2)
// {
//     int i = 0;
//     while((s1[i] = s2[i]) != '\0')
//         i++;
// }

// Pointer version
// void strcpyy(char *s1, char *s2)
// {
//     while(*s1++ = *s2++)
//         ;
// }

int main(void)
{
    char *str = "Hello, world!";
    char *str1 = (char*)malloc(50*sizeof(char));
    char *str2 = (char*)malloc(50*sizeof(char));
    //strcp(str1, " ");
    //strcpyy(str1, "ewerton");
    printf("%s\n", strcpy(str1, str));
    printf("%s\n", strncpy(str2, str, 10));
    free(str1);
    free(str2);
    return 0;
}