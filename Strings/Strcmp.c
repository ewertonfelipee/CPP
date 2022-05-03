#include <stdio.h>

int strcmpp(char *s1, char *s2)
{
    for( ; *s1 == *s2; s1++, s2++ )
        if(*s1 == '\0')
            return 0;
        return *s2 - *s1;
}

int main(void)
{
    // char *t = "felipe";
    // char *s = "ewerton";

    int resp = strcmpp("ewerton", "felipe");
    printf("%d\n", resp);

    return 0;
}