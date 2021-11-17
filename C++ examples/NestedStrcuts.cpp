#include <iostream>
#include <cstring>
using namespace std;

struct Date {

    int Day;
    int Month;
    int Year;
};

struct Address{

    string Street;
    string City;
    string State;
    string Country;
};

struct Person {

    string Name;
    Date DateBirth;
    Address Addresses;
};

int main(void)
{
    Person Person01;
    cout <<"\t**** Name ****\t" << endl;

    getline(cin, Person01.Name);
    cout <<"\t**** Name ****\t" << endl;
    cout << Person01.Name << endl;

    cout <<"\t**** Date Birth ****\t" << endl;
    cin >> Person01.DateBirth.Day >> Person01.DateBirth.Month 
        >> Person01.DateBirth.Year;

    cout <<"\t**** Date Birth ****\t" << endl;
    cout << Person01.DateBirth.Day << "\\";
    cout << Person01.DateBirth.Month << "\\";
    cout << Person01.DateBirth.Year << endl;

    cout <<"\t**** Address ****\t" << endl;
    cin.ignore();
    getline(cin, Person01.Addresses.Street);
    cin >> Person01.Addresses.City >> Person01.Addresses.State >> Person01.Addresses.Country;

    cout <<"\t**** Address ****\t" << endl;
    cout << Person01.Addresses.Street << " - ";
    cout << Person01.Addresses.City << " - ";
    cout << Person01.Addresses.State << " - ";
    cout << Person01.Addresses.Country << endl;

    return 0;
}