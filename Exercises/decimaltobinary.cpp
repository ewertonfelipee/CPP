#include <iostream>
using namespace std;

long long int convert(int n)
{
    long long bin = 0;
    int rest, i = 1;
    while(n != 0){
        rest = n % 2; // divsion rest
        n /= 2; // division quocient
        bin = bin + (rest * i);
        i *= 10;
    }
    return bin;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary: %lld\n", convert(n));
    return 0;
}
