#include <iostream>

using namespace std;

int main()
{
    int number{234};
    cout << "value of number variable before to be swap by pointer: " << number << endl;
    int *pointer;
    pointer = &number;
    *pointer = 1456;

    cout << "value of number variable after to be swap by pointer : " << *pointer << endl;

    cout << "Number address and Pointer address " << &number << " " << &pointer << endl;

    int *otherpointer;

    otherpointer = &number;

    cout << "Add 200 to number variable: " << *otherpointer + 200 << endl;
}