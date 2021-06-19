#include <iostream>

using namespace std;

int main(){

    int a;

    scanf("%d",&a);

    a++;
    cout << "postfix increment: " << a << endl;
    a--;
    cout << "postfix decrement: " << a << endl;

    ++a;
    cout << "pretfix increment: " << a << endl;

    --a;
    cout << "pretfix decrement: " << a << endl;
}