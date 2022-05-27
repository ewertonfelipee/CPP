#include <stdio.h>

struct card {
    int Age;
    char *name;
} cardAge, *cardName;

int main()
{
    struct card cardAge = {17, "McLovin"};
    // cardPoint.data;
    struct card *cardName = &cardAge;

    printf("%d\n", cardName -> Age);
    printf("%s\n", cardName -> name);
}