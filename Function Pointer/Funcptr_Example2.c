#include <stdio.h>

void func(int a)
{
    printf("Print the value: %d\n", a);
}

int main()
{
    int (*func_ptr)(int);
    func_ptr = &func;
    func_ptr = func; // & removed

    (*func_ptr)(10);
    (func_ptr)(15); // * removed
}