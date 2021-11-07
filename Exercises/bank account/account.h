#pragma once
#include <iostream>
#include <string>

using namespace std;

// file with Attributes declarations and class methods file

class Account
{
    private: 
        string BankName;
        int Agency;
        int AccountNumber;
        string Holder;
        double Balance{0.0};
    
    public:
        bool Withdraw(double amount);
        void Deposit(double amount);
        void Transfer(Account &Destination, double amount);
        double BalanceConsult();
        // return attributes values
        string GetBank();
        int GetAgency();
        int GetAccountNumber();
        string GetHolder();
        void SetBank(string BankName);
        void SetAgency(int Agency);
        void SetHolder(string Holder);
        void SetAccountNumber(int AccountNumber);
};