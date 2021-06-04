#include <iostream>

using namespace std;

int main(){

    int number1;

    bool result;

    cout << "digite um numero: " << endl;

    cin >> number1;
    
    result = (number1 > 100) && (number1 != 0);

    cout << result << endl;
}

// int main(){

//     int number1;

//     bool result = true;

//     cin >> number1;

//     if(number1 > 100){

//         cout << result << endl;
//     }
//     else{

//         return 0;
//     }
// }