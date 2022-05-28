#include <stdio.h>

struct card {
    int Age;
    char *name;
}*cardName;

int main()
{
    struct card cardAge = {17, "McLovin"};
    struct card *cardName = &cardAge;

    printf("%d\n", cardName -> Age);
    printf("%s\n", cardName -> name);
}
