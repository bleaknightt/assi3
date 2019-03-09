#pragma once

#include <iostream>
#include <string>
#include "Account.h"
#include "Savings.h"

using namespace std;

Savings::Savings()
{
    max_transactions = 0;
    interest_rate = 0.0;
}
Savings::Savings(int m, float r, int n, float b, float t, std::string o) : Account(n, b, t, o)
{
    max_transactions = m;
    interest_rate = r;
}
Savings::~Savings()
{
    cout << "Destructing Savings object!" << endl;
}

////////////////////////////////////////Set Functions//////////////////////////////////////

void Savings::setMax_Transactions(int m)
{
    max_transactions = m;
}
void Savings::setInterest_rate(float r)
{
    interest_rate = r;
}

///////////////////////////////////////Get Functions//////////////////////////////////////

int Savings::getMax_Transactions() const
{
    return max_transactions;
}
float Savings::getInterest_Rate() const
{
    return interest_rate;
}

///////////////////////////////////////Print Functions////////////////////////////////////

void Savings::printAccount_Owner()
{
    cout << "Account owner: " << getAccount_Owner() << endl;
}
void Savings::printAccount_Information()
{
    cout << "Account information!" << endl;
    cout << "Owner: " << getAccount_Owner() << endl;
    cout << "Account number: " << getAccount_Number() << endl;
    cout << "Balance: $" << getBalance() << endl;
    cout << "Transaction fee: $" << getTransaction_Fee() << endl;
    cout << "Max Transactions: " << max_transactions << endl;
    cout << "Interest Rate: " << interest_rate << "%" << endl;
}
