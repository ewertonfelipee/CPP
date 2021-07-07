#include <string>
#include <iostream>

int main(){

    bool bFezSol, bCarroPronto, bSalarioDepositado;
    bool bAcesso;
    std::string SenhaDeAcesso = "cmaismais";
    std::string SenhaDigitada;

    std::cout << "Digite a senha de acesso: ";
    std::cin >> SenhaDigitada;

    if(SenhaDigitada == SenhaDeAcesso){

        std::cout << "\nAcesso Permitido" << std::endl;
        bAcesso = true;
    }

    else{

        std::cout << "\nAcesso Negado" << std::endl;
        exit(0);
    }

    bFezSol = bCarroPronto = bSalarioDepositado = true;

    if(bAcesso == true){

        if(bFezSol && bCarroPronto && bSalarioDepositado){
            std::cout << "\nvai dar praia" << std::endl;
        }
        else{
            std::cout << "nao vai dar praia" << std::endl;
        }
    }
}
