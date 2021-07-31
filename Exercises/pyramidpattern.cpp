#include <iostream>
using namespace std;

void pattern(int rows)
{
    for(int i = 0; i < rows; i++){
        // for spacing
        for(int j = 0; j <= rows - i - 2; j++){
            cout << " ";
        }
        // for pattern printing
        for(int k = 0; k < 2 * i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(void)
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}