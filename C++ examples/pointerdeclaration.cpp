#include <iostream>
using namespace std;

int main(void)
{
    int* ptr{nullptr};
    int* ptr2{nullptr};
    int number, number2;
    cin >> number;
    cin >> number2;
    ptr = &number;
    cout << "Number value: " << number << endl;
    cout << "Number address: " << &number << endl;
    cout << "address of ptr variable: " << &ptr << endl;
    cout << "value ""inside"" variable ptr: " << *ptr << endl;
    *ptr = number2;
    ptr2 = ptr;
    // the above line is analogous to ptr2 = &number
    cout << "value ""inside"" variable ptr after modification: " << *ptr << endl;
    *ptr2 = (*ptr+10);
    cout << "address of ptr2 variable: " << &ptr2 << endl;
    cout << "value ""inside"" variable ptr2: " << *ptr2 << endl;
    return 0;
}