#include <stdio.h>
#include <stdlib.h>

void print(char *str){
    while (*str)
    {
        putchar(*str++);
        // string is a pointer to a char
    }
    
}

int main(void){
    
    int a[] = {8, 3, 4};
    size_t n = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < n; i++){
        printf("%d\n", a[i]);
        printf("first position plus i whitout syntactic sugar: %d\n", *(a + i));
    }
    // printf("address: %p\n", &a);
    // printf("first position: %d\n", *a);
    printf("first position: %d\n", a[0]);
    printf("first position whitout syntactic sugar: %d\n", *a);
    printf("second position: %d\n", a[1]);
    printf("second position whitout syntactic sugar: %d\n", *(a + 1));
    // printf("first position plus i: %d\n", *a + i);

    int *p, i = 2;
    p = &i;
    printf("Address: %p\n", p);
    printf("Value: %d\n", *p);
    printf("first position plus 1: %p\n", (a + 1));

    //char s[] == char *t these two ways are the same
    char s[] = "ewerton felipe\n";
    char *t = "ewerton felipe\n";
    //char *t = "ewerton";

    print(s);
    print(t);
    putchar(*t); // expected print e
    putchar('\n');
    t++;
    putchar(*t); // expected print w
    putchar('\n');
    //puts(t);

    return 0;
}