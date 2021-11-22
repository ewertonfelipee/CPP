#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // time_t is used to represent calender, DateTime type
    //func time() return times
    time_t CurrentTime = time(NULL);
    // localtime() function takes address a variable of the time_t type on your arguments
    // and returns of a struct pointer of type tm
    tm* MyTime = localtime(&CurrentTime);

    cout << "\nMes: " << 1 + MyTime-> tm_mon << endl;
    cout << "\nDay of Week: " << 1 + MyTime-> tm_wday << endl;
    cout << "\nDay: " << MyTime-> tm_mday << endl;
    cout << "\nDays in year: " << MyTime-> tm_yday << endl;
    return 0;
}