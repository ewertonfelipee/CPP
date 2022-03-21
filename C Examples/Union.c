#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union st{

    unsigned char id;
    unsigned int number;
};


int main(int argc, char **argv)
{
    union st s;
    s.number = 2022;
    //s.id = 0xE7;
    printf("before memset: %d\n", s.number);
    printf("before memset: %d\n", s.id);
    printf("sizeof(union st): %ld\n", sizeof(union st));
    putchar('\n');
    memset(&s, 0, sizeof(union st)); // puts 0 in the union
    printf("after memset: %d\n", s.number);
    printf("after memset: %d\n", s.id);

    return 0;
}