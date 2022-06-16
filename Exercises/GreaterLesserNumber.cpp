#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Array size: ";
    cin >> n;
    float min, max;
    float arr[n];
    float sum{0.0f};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];

    for(int i = 0; i < n; i++){

        if(arr[i] > max){
            max = arr[i];
        }
        else{

            min = arr[i];
        }
    }

	std::cout << "O Menor Valor digitado foi: " << min << "\n";
	std::cout << "O Maior Valor digitado foi: " << max << "\n";    
    return 0;
}