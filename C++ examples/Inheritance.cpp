#include <iostream>
using namespace std;

class Base{
    public:
        void SolicitarNumberos()
        {
            cout << "Num1: ";
            cin >> Num1;
            cout << "Num2: ";
            cin >> Num2;
            MostrarResultado(Num1, Num2);
        }
    private:
        float Num1, Num2;
        float Soma(int Num1, int Num2)
        {
            return (Num1 + Num2);
        }

        void MostrarResultado(int Num1, int Num2)
        {
            cout << Soma(Num1, Num2) << "\n";
        }
};

class Derivada : public Base{};

int main()
{
    Derivada obj;
    obj.SolicitarNumberos();

    return 0;
}