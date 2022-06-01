#include <stdio.h>

struct card {
    int Age;
    char *name;
}*cardName;

int main()
{
    struct card cardAge = {17, "McLovin"};
    struct card *cardName = &cardAge;

    printf("A idade eh: %d e o nome eh: %s\n", cardName -> Age, cardName -> name);

    return 0;
}
