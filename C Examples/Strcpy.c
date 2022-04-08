#include <stdio.h>
#include <string.h>

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
void strcpyy(char *s1, char *s2)
{
    while(*s1++ = *s2++)
        ;
}

int main(void)
{
    char str1[20];
    char str2[20];
    //strcp(str1, " ");
    strcpyy(str1, "ewerton");
    strcpyy(str2, str1);
    printf("%s\n", str2);

    return 0;
}