#include <iostream>

using namespace std;

int main ()
{
    int array[] = {1, 23, -78, 900, 234};
    cout << "[ ";
    for(int i = 0; i < 5; i++){
        cout << "array [" << i << "] = " << array[i] << " ";
    }
    cout << " ]" << endl;
    // int *ptr;

    // ptr = array;

    // cout << "element value of array before increment: " 
    // << *ptr << endl;
    // cout << "Memory address: " << &ptr << endl;
    // cout << endl;
    // ptr++;// ptr++ = ptr+1 // increment on memory position of array 
    // cout << "element value of array after increment: " 
    // << *ptr << endl;
    // cout << "Memory address: " << &ptr << endl;
    // cout << endl;
    // cout << "element value of array after increment: " 
    // << *(ptr+1) << endl;
    // cout << "Memory address: " << &ptr+1 << endl;
    // cout << endl;
    // cout << "element value of array after increment: " 
    // << *(ptr+2) << endl;
    // cout << "Memory address: " << &ptr+2 << endl;
    // cout << endl;
    // cout << "element value of array after increment: " 
    // << *(ptr+3) << endl;
    // cout << "Memory address: " << &ptr+3 << endl;
    // cout << endl;
    // cout << "Size of integer: " << sizeof(int) << " bytes" << endl;
    // cout << endl;


    return 0;
}