#include <iostream>

using namespace std;

int main(){

    double MaiorNumero, Numero01, Numero02;

    cout << "Digite o Primeiro Numero" << endl;
    cin >> Numero01;
    cout << "Digite o Segundo Numero" << endl;
    cin >> Numero02;

    MaiorNumero = Numero01 > Numero02 ? Numero01 : Numero02;

    if(Numero01 > Numero02){

        printf("numero01 maior que numero02");
    }
    else{
        printf("numero02 maior que numero01\n");
    }

    cout << "O maior numero eh: " << MaiorNumero << endl;

    exit(0);
}