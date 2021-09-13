#include <iostream>
// Program coded in Brazilian Portuguese
using namespace std;

class Casa
{
    // Private esta indicando que estes atributos soh poderao
    // ser acessados diretamente no codigo da classe Casa
    private:
        int NumQuartos{ 5 };
        float Tamanho{ 90.0f };
        // No geral coloca-se b na frente de uma variavel
        // bool para indicar que ela eh do tipo booleana(bool)
        bool bTemSuite{ true };
    public:
        void MostrarTamanho();
        int ObtenhaNumeroDeQuartos();
        bool TemSuite();
};

// Na funcao main esta soh pode acessar os membros public
int main()
{
    Casa CasaDePraia; //CasaDePraia eh o objeto
    CasaDePraia.MostrarTamanho();
    cout << "\nTem Suite: " ;
    CasaDePraia.TemSuite() ? (cout << "Sim") : (cout << "nao") << endl;
    cout << "\n" << CasaDePraia.ObtenhaNumeroDeQuartos() << endl;
    // Para acessar os membros da classe Casa usamos neste
    // caso a notacao ponto.
    // NomedoObj.NomedoAtributo ou NomedoObj.NomedoMetodo
    // ou funcao
    return 0;
}
// Estes codigos pertecem a classe casa e portanto podem
// acessar diretamente os seus atributos privados
void Casa::MostrarTamanho()
{
    cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
    return NumQuartos;
}

bool Casa::TemSuite()
{
    return bTemSuite;
}
