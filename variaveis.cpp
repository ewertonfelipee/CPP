#include <iostream>

using namespace std;

int main(){

    int numvidas = 5;
    int score = 1350;

    cout << "life points: " << numvidas << endl;
    cout << "score: " << score << endl;
    cout << "tamanho da variavel numvidas: " << sizeof(numvidas) 
    << "bytes" << endl;
    cout << "endereco da memoria da variavel score: " << &score << endl;

    cout << "=======================================================" << endl;
    char caracter = '2';
    char caracter2 = 'x';
    cout << "valor da caracter: " << caracter << endl;
    cout << "valor do caracter2 " << caracter2 << endl;
    cout << "tamanho da variavel caracter: " << sizeof(caracter) 
    << "bytes" << endl;
    cout << "tamanho da variavel caracter2: " << sizeof(caracter2) 
    << "bytes" << endl;    
    return 0;
}

