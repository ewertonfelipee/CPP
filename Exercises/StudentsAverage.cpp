#include <iostream>
using namespace std;

int main(){

    float arr[10];
    float sum{0.0f};
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;
}
