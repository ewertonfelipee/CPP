#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st{

    unsigned int number;
    unsigned char id;
};


int main(int argc, char **argv)
{
    struct st s;
    s.id = 1;
    s.number = 2022;
    printf("before memset: %d\n", s.number);
    printf("before memset: %d\n", s.id);
    printf("sizeof(union st): %ld\n", sizeof(struct st));
    putchar('\n');
    memset(&s, 0, sizeof(struct st)); // puts 0 in the struct
    printf("after memset: %d\n", s.number);
    printf("after memset: %d\n", s.id);

    return 0;
}