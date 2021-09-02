#include <iostream>
using namespace std;

int main(void)
{
    char operator_symbol;
    int n, n1, n2;
    cout << "Enter with two numbers you want operates: ";
    cin >> n1 >> n2;
    cout << "Enter with operator symbol: ";
    cin >> operator_symbol;
    switch (operator_symbol){
        case '+':
            cout << "\nn1 + n2 = " << n1 + n2;
            break;
        case '-':
            cout << "\nn1 - n2 = " << n1 - n2;
            break;
        case '*':
            cout << "\nn1 * n2 = " << n1 * n2;
            break;
        case '/':
            cout << "\nn1 / n2 = " << n1 / n2;
            break;
        default:
            cout << "Enter with a valid operator!";
            break;
    }

    cout << "\n";
}