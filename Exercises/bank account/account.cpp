#include "account.h"
#include <iostream>
#include <string>

using namespace std;

bool Account::Withdraw(double amount)
{
    if(Balance < amount){
        cout << "\nInsufficient Balance!\n";
        cout << "Current Balance: R$" << BalanceConsult() << "\n";
        return false;
    }
    else{
        Balance -= amount;
        cout << "Current Balance R$" << BalanceConsult() << "\n";
        return true;
    }
}

void Account::Deposit(double amount)
{
    Balance += amount;
    cout << "Deposit R$" << amount << "\nSuccessfully made!\n";
}

void Account::Transfer(Account &Destination, double amount)
{
    if(Balance < amount){
        cout << "\nInsufficient Balance\n";
    }

    else{
        Destination.Deposit(amount);
        Balance -= amount;
        cout <<"\n*****Data*****\n";
        cout << "Holder: " << Destination.GetHolder() << "\n";
        cout << "Bank: " << Destination.GetBank() << "\n";
        cout << "Agency: " << Destination.GetAgency() << "\n";
        cout << "Account: " << Destination.GetAccountNumber() << "\n";
        cout << "Transfer Successfully made!\n";
        cout << "Current Balance R$" << BalanceConsult() << "\n";
    }
}

double Account::BalanceConsult()
{
    return Balance;
}

string Account::GetBank()
{
    return BankName;
}

int Account::GetAgency()
{
    return Agency;
}

int Account::GetAccountNumber()
{
    return AccountNumber;
}

string Account::GetHolder()
{
    return Holder;
}

void Account::SetBank(string BankName)
{
    this->BankName = BankName;
}

void Account::SetAgency(int Agency)
{
    this->Agency = Agency;
}

void Account::SetAccountNumber(int AccountNumber)
{
    this->AccountNumber = AccountNumber;
}

void Account::SetHolder(string Holder)
{
    this->Holder = Holder;
}