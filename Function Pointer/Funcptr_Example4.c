// Simple C program to show function pointers as parameter

#include <stdio.h>

void func1(){printf("Func1\n");}
void func2(){printf("Func2\n");}

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*func)())
{
    func();
}

int main()
{
    wrapper(func1);
    wrapper(func2);

    return 0;
}