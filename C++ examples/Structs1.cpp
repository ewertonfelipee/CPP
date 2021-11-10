#include <iostream>

using namespace std;

struct Date
{

    static int counter;
    int id;
    int Day;
    int Month;
    int Year;
    Date(){id = counter++; cout<<"Constructor Date(" << id << ") executed" << endl;}
    ~Date(){cout<<"Destructor Date(" << id << ") executed" << endl;}

};

int Date::counter = 1;

int main()
{

    {
        Date Scheduled1; // struct initialize
        //Create escope
        {
            Date Scheduled2;

            // Schedule3 are at the Heap section of memory and don't
            // will be destroyed in scope and
            Date *Scheduled3 = new Date;
            // Destroy Scheduled3
            delete(Scheduled3);

        }
        // Here destructor is called for Scheduled2
        Date Scheduled3;
    }
    // Here destructor is called for Scheduled1 and Schedule3
    return 0;
}

/*
Class Date
{
    public:
        int Day;
        int Month;
        int Year;

    public:
        Data(): Day(22), Month(04), Year(2021){}

};

int main(void)
{
    Data.Scheduled;

    cout << "Dia: " << Scheduled.Day << endl;
    cout << "Month: " << Scheduled.Month << endl;
    cout << "Year: " << Scheduled.Year << endl;

    return 0;
}
*/