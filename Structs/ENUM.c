#include <stdio.h>

enum months{
    JAN = 1, FEV, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main(){
    enum months month;

    const char *monthName[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug","Sep", "Oct", "Nov", "Dec"};

    for(month = JAN; month <= DEC; month++){
        printf("%2d%11s\n", month, monthName[month]);
    }
}