#include <iostream>
using namespace std;

//  Without Templates
// int soma_int(int x, int y)
// {
//     return x + y;
// }

// float soma_float(float x, float y)
// {
//     return x + y;
// }

// double soma_double(double x, double y)
// {
//     return x + y;
// }

// int main()
// {
//     cout << soma_int(2,2) << "\n";
//     cout << soma_float(2.5,2.7) << "\n";
//     cout << soma_double(2.1,2.6) << "\n";

//     return 0;
// }


//  With Templates

template<typename T>
T soma(T x, T y)
{
    return x + y;
}

int main()
{
    cout << soma<int>(2,2) << "\n";
    cout << soma<float>(2.4, 4.5) << "\n";
    cout << soma<double>(2.1, 9.5) << "\n";

    return 0;
}