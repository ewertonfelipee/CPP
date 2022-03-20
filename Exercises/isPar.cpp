#include <iostream>
using namespace std;

bool isPar(int number)
{
    if(number % 2 == 0)
        return true;

    return false;
}

int main()
{
    int number;
    cout << "digite um numero: ";
    cin >> number;

    if(isPar(number)){
        cout << "eh par" << endl;
        // return true;
    }
    else{
        cout << "eh impar" << endl;
        // return false;
    }
    return 0;
}