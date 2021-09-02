#include <iostream>
#include <math.h>

using namespace std;

void arm_sumstrong(int num)
{
    int k, arm_sum = 0;
    int temp = num;
    while(num > 0){
        k = num % 10;
        arm_sum +=pow(k, 3);
        num = num / 10;
    }
    if(temp == arm_sum){
        cout << "Is armstrong number: " << temp << "\n";
    }
    else {
        cout << "Is not armstrong number: " << temp << "\n";
    }
}

int main()
{
    int num;
    cout << "Digite a number: ";
    cin >> num;
    arm_sumstrong(num);

    return 0;
}