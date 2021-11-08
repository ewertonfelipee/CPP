#include "account.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Account AccountClient01; // AccountClient01 is object type of Account Class
    Account AccountClient02;

    AccountClient01.SetBank("Bank of Brazil");
    AccountClient01.SetAgency(1234);
    AccountClient01.SetAccountNumber(25000);
    AccountClient01.SetHolder("ewerton");
    AccountClient01.Deposit(12335);
    AccountClient01.Withdraw(2000);

    AccountClient02.SetBank("Bank of Brazil");
    AccountClient02.SetAgency(1235);
    AccountClient02.SetAccountNumber(99999);
    AccountClient02.SetHolder("felipe");

    AccountClient01.Transfer(AccountClient02, 2000);
    AccountClient02.Withdraw(100);
    AccountClient02.Withdraw(900);

    return 0;
}

