#include <stdio.h>

int global_var;

int global_initialized_var = 5;

void function()
{
    int stack_var;

    printf("the function's stack_var is at address 0x%08x\n", &stack_var);
}

int main()
{
    int stack_var; // same name as the variable in function()
    static int static_initialized_var = 5;
    static int static_var;
    int *heap_var_ptr;

    heap_var_ptr = (int *)malloc(sizeof(int));

    // these variables are in the data segment.
    printf("global_initialized_var = 0x%08x\n", &global_initialized_var);
    printf("static_initialized_var = 0x%08x\n", &static_initialized_var);
    printf("\n");
    // these variables are in the bss segment. bss = Block Stating Symbol
    printf("global_var = 0x%08x\n", &global_var);
    printf("static_var = 0x%08x\n", &static_var);
    printf("\n");
    // this variable is in the heap segment.
    printf("heap_var_ptr = 0x%08x\n", heap_var_ptr);
    printf("&heap_var_ptr = 0x%08x\n", &heap_var_ptr);
    printf("\n");
    // this variables are in the stack segment.
    printf("stack_var = 0x%08x\n", &stack_var);
    function();
    return 0;
}