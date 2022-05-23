// Function pointer can be used in place of switch case.

#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}

void sub(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}

void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

void divisor(int a, int b)
{
    printf("Division is %d\n", a / b);
}

int main()
{
    // func_ptr_arr is an array of function pointer
    void (*func_ptr_arr[])(int, int) = {add, sub, multiply};
    unsigned int choice, a, b;
    scanf("%d %d", &a, &b);

    printf("Enter the number between 0 and 2: \n");
    scanf("%d", &choice);

    if(choice > 2)
        return 0;
    
    (*func_ptr_arr[choice])(a ,b);

    return 0;
}
