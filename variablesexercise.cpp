#include <iostream>

using namespace std;

int main(){

    int inteiro = 1;
    float flutuante = 23.5;
    double duplo = 23.55555;
    char caracter = 'A';

    cout << "valor do inteiro: " << inteiro << endl;
    cout << "tamanho da variavel inteiro: " << sizeof(inteiro) << endl;
    cout << "endereco da variavel inteiro: " << &inteiro << endl; 

    cout << "valor do float: " << flutuante << endl;
    cout << "tamanho da variavel float: " << sizeof(flutuante) << endl;
    cout << "endereco da variavel float: " << &flutuante<< endl;

    cout << "valor do double: " << duplo << endl;
    cout << "tamanho da variavel double: " << sizeof(duplo) << endl;
    cout << "endereco da variavel double: " << &duplo << endl; 

    cout << "valor do char: " << caracter << endl;
    cout << "tamanho da variavel char: " << sizeof(caracter) << endl;
    cout << "endereco da variavel char: " << (void *)&caracter << endl; 
}