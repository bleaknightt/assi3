#pragma once

#include <iostream>
#include <string>
#include "Account.h"
#include "Checking.h"

using namespace std;

Checking::Checking()
{
    privilege_cheque = false;
    overdraft_limit = 0.0;
}
Checking::Checking(bool p, float l, int n, float b, float t, std::string o) : Account(n, b, t, o)
{
    privilege_cheque = p; 
    overdraft_limit = l;
}
Checking::~Checking()
{
    cout << "Destructing Checking object!" << endl;
}

///////////////////////////////////////Set Functions///////////////////////////////////

void Checking::setPrivilege_Cheque(bool p)
{
    privilege_cheque = p;
}
void Checking::setOverdraft_Limit(float l)
{
    overdraft_limit = l;
}

/////////////////////////////////////Get Functions///////////////////////////////////

bool Checking::getPrivilege_Cheque()
{
    return privilege_cheque;
}
float Checking::getOverdraft_limit()
{
    return overdraft_limit;
}

////////////////////////////////////Print Functions/////////////////////////////////

void Checking::printAccount_Owner()
{
    cout << "Account owner: " << getAccount_Owner() << endl;
}
void Checking::printAccount_Information()
{
    cout << "Account information!" << endl;
    cout << "Owner: " << getAccount_Owner() << endl;
    cout << "Account number: " << getAccount_Number() << endl;
    cout << "Balance: $" << getBalance() << endl;
    cout << "Transaction fee: $" << getTransaction_Fee() << endl;
    cout << "Cheque privileges: " << privilege_cheque << endl;
    cout << "Overdraft limit: $" << overdraft_limit << endl;
}
