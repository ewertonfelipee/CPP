#include <iostream>
using namespace std;

int main()
{
    int number;
    char letter;
    cin >> number >> letter;
    void *ptrg;
    ptrg = &letter;
    cout << "letter: " << *(char*)ptrg << endl;
    ptrg = &number;
    cout << "number: " << *(int*)ptrg << endl;

    return 0;
}