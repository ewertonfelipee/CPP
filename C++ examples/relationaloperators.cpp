#include <iostream>

using namespace std;

int main(){

    int number1, number2;

    bool compare;

    cin >> number1 >> number2;

    compare = (number1 == number2);
    cout << "equal: " << compare << endl;

    compare = (number1 != number2);
    cout << "not equal: " << compare << endl;
    
    compare = (number1 >= number2);
    cout << "bigger equal: " << compare << endl;
    
    compare = (number1 <= number2);
    cout << "smaller equal: " << compare << endl;
    
    compare = (number1 > number2);
    cout << "bigger than: " << compare << endl;

    compare = (number1 < number2);
    cout << "smaller than: " << compare << endl;
}