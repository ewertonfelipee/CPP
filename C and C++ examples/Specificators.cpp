#include <string>
#include <iostream>

using namespace std;

int main(){

    int IntegerNumber = 12;
    float RealNumber = 34.56;
    char Caracter = 'c';
    string Text = "String Text";
    printf("Integer number value: %d\n", IntegerNumber);
    printf("Real number value: %.2f\n", RealNumber);
    printf("String value: %s\n", Text.c_str());
    printf("Caracter: %c and your value on ASCII table is: %d\n", 
    Caracter, Caracter);

    return 0;
}