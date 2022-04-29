#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    char s[20] = "ewerton";
    int n = 12;
    printf("%x\n", n);
    printf("%c\n", s[6]);
    for(int i = 0; i <= '\0'; i++){
        printf("%s ", s);
    }
    putchar('\n');
    for(int i = 0; i < 20; i++){
        printf("%x ", s[i]);
    }
    putchar('\n');
    for(int i = 0; i < 20; i++){
        printf("%o ", s[i]);
    }
    putchar('\n');
    for(int i = 0; i < 20; i++){
        printf("%d ", s[i]);
    }


    putchar('\n');
    return 0;
}