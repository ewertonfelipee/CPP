#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp){
    // **argv and *argv[] are the same thing

    int i;
    for(i=0; i<argc; i++){
        puts(argv[i]);
        puts(envp[i]);
    }

    int n = 3, *p = NULL;
    printf("\naddress of n: %p\nsize of n: %zu\n\n", &n, sizeof(n));
    printf("\naddress of p: %p\nsize of p: %zu\n\n", &p, sizeof(p));
    printf("value of p: %p\n", p);
    p = &n;

    printf("value of p: %d\n", *p);
    printf("value of p: %p\n", &p);
    return 0;
}