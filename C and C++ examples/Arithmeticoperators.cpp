#include <iostream>

int main(){

    int number1, number2, sum, multiple, sub, division, mod;
    std::cout << "digite os valores: ";
    std::cin >> number1 >> number2;
    std::cout << "os valores inseridos sao: ";
    std::cout << number1 << std::endl << number2 << std :: endl;

    std:: cout << "Add" << std::endl;
    sum = number1 + number2;
    std:: cout << "sum value is: " << sum << std::endl;
    
    std:: cout << "multiplication" << std::endl;
    multiple = number1 * number2;
    std:: cout << "mult values is: " << multiple << std::endl;

    std:: cout << "subtraction" << std::endl;
    sub = number1 - number2;
    std:: cout << "sub values is: " << sub << std::endl;

    std:: cout << "division" << std::endl;
    division = number1 / number2;
    std:: cout << "div values is: " << division << std::endl;

    std:: cout << "mod" << std::endl;
    mod = number1 % number2;
    std:: cout << "mod values is: " << mod << std::endl;
}