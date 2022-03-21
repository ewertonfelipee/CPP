#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *malloc_s(size_t size){
    void *ptr;
    ptr = malloc(size);
    if(ptr == NULL){
        fprintf(stderr,"insuficent memory\n");
        exit(1); // exit work with return in main function
    }
    else
        return ptr;
}
int main(int argc, char **argv){
    int *p = NULL, i;

    p = malloc_s(3 * sizeof(int));
    *(p+0) = 10; // *p == p[0]
    *(p+1) = 20; // p[1]
    *(p+2) = 30; // p[2]
    // printf("%d\n", *p);
    // printf("%d\n", p[1]);
    // printf("%d\n", p[2]);
    // printf("%d\n", p[3]);
    // for(int i = 0; i < 3; i++){
    //     printf("%d\n", *(p + i));
    // }
    //putchar('\n');
    for(int i = 0; i < 3; i++){
        printf("%d\n", *(p + i));
    }
    p = realloc(p, sizeof(int) * 5);
    *(p+3) = 40; // p[3]
    *(p+4) = 50;
    memset(p, 0, sizeof(int) * 5);
    putchar('\n');
    for(int i = 0; i < 5; i++){
        printf("%d\n", *(p + i));
    }

    free(p);

    return 0;
}