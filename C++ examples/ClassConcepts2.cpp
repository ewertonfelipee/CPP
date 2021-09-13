#include <iostream>
// Program coded in Brazilian Portuguese
using namespace std;

// Notacao flecha

#include <iostream>

class Casa
{
	
private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	
}; 

int main()
{
	// Casa CasaDePraia;
	// CasaDePraia.MostrarTamanho();
	// CasaDePraia.SetNumQuartos(6);
    // (*ptr). == ->

    Casa *CasaDePraia = new Casa();
    CasaDePraia -> MostrarTamanho();
    CasaDePraia -> ObtenhaNumeroDeQuartos();
    CasaDePraia -> TemSuite();
    CasaDePraia -> SetNumQuartos(6);

	std::cout << "\nNum Quartos: " << CasaDePraia -> ObtenhaNumeroDeQuartos();
	std::cout << "\nTem Suite: ";
    CasaDePraia -> TemSuite() ? (std::cout << "Sim"): (std::cout << "Não") << "\n";
	std::cout << "\n";
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	} 
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}