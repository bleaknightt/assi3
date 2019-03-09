#pragma once

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

Account::Account()
{
    account_number = 0000;
    balance = 0;
    transaction_fee = 0;
    account_owner = "None assigned";
}
Account::Account(int n, float b, float t, string o)
{
    account_number = n;
    balance = b;
    transaction_fee = t;
    account_owner = o;
}
Account::~Account()
{
    cout << "Destructing Account object!" << endl;
}

////////////////////////////////////////Set Functions///////////////////////////////////////

void Account::setAccount_number(int n)
{
    account_number = n;
}
void Account::setBalance(float b)
{
    balance = b;
}
void Account::setTransaction_Fee(float t)
{
    transaction_fee = t;
}
void Account::setAccount_Owner(string o)
{ 
    account_owner = o;  
}

///////////////////////////////////////Get Functions///////////////////////////////////////

int Account::getAccount_Number() const
{
    return account_number;
}
float Account::getBalance() const
{
    return balance;
}
float Account::getTransaction_Fee() const
{
    return transaction_fee;
}
std::string Account::getAccount_Owner() const
{
    return account_owner;
}

//////////////////////////////////////Print Functions///////////////////////////////////////

void Account::printAccount_Owner()
{
    cout << "Account owner: " << account_owner << endl;
}
void Account::printAccount_Information()
{
cout << "Account information!" << endl;
cout << "Owner: " << account_owner << endl;
cout << "Account number: " << account_number << endl;
cout << "Balance: $" << balance << endl;
cout << "Transaction fee: $" << transaction_fee << endl;
}




