#include <iostream>
using namespace std;

int main(){

    float arr[3];
    float sum{0.0f};
    float average{0.0f};
    int avg = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < avg; i++){
        cin >> arr[i];
    }

    for(auto array : arr)
    {
        sum += array;
    }

    average = sum / avg;
    cout << average << endl;
}
