#include <iostream>

using namespace std;

void swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1, num2, temp;
    cout << "Enter the values: ";
    cin >> num1 >> num2;
    swap(num1, num2);
    cout << "out after swap: " << num1 
    << " " << num2 << endl;

    return 0;
}