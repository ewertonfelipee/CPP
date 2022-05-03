#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50

void msg_print_error(char *str)
{
    fprintf(stderr, "Error: %s\n", str);
    exit(-1);
}

int main(int argc, char *argv[])
{
    int *int_ptr;
    char *char_ptr;
    int mem_size;

    if (argc < 2){ // If there aren't command-line arguments, 
        mem_size = SIZE; // use SIZE value as the default value
    }
    else{
        mem_size = atoi(argv[1]); // convert 1st argument into an integer
    }

    printf("\t[+] allocating %d bytes of memory of the heap for char_ptr\n", mem_size);
    char_ptr = (char *)malloc(mem_size); // allocating heap memory

    if(char_ptr == NULL){
        msg_print_error("could not allocate heap memory.");
    }

    strcpy(char_ptr, "this is memory is locate on the heap.");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);
    printf("\t[-] freeing char_ptr's heap memory...\n");
    free(char_ptr); // freeing 1st block of memory

    printf("\t[+] allocating 12 bytes of memory on the heap for int_ptr\n");
    int_ptr = (int *)malloc(3*sizeof(int));

    if(int_ptr == NULL){
        msg_print_error("could not allocate heap memory.\n");
    }
    *int_ptr = 31337; // put the value where int_ptr is pointing
    printf("int_ptr (%p) --> %d\n", int_ptr, *int_ptr);
    printf("\t[-] freeing int_ptr's heap memory...\n");
    free(int_ptr);

    printf("\t[+] allocating another 15 bytes for char_ptr\n");
    char_ptr = (char *)malloc(15*sizeof(char));

    if(char_ptr == NULL){
        msg_print_error("could not allocate heap memory.");
    }

    strcpy(char_ptr, "new memory");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);
    printf("\t[-] freeing 2nd char_ptr's heap memory...\n");
    free(char_ptr);

    return 0;
}