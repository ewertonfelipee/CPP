#include <stdio.h>

int slen(char *str)
{
    char *p = str;
    while (*p != '\0'){
        p++;
    }
    return p - str;
}

int main(void)
{
    char *s = "ewerton";
    int str = slen(s);
    printf("%d\n", str);
    printf("%s\n", s);

    return 0;
}