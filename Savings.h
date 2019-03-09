#pragma once

#include <iostream>
#include "Account.h"

class Savings : public Account
{
    private:
        int max_transactions;
        float interest_rate;

    public:
        Savings();
        Savings(int, float, int, float, float, std::string);
        ~Savings();

        void setMax_Transactions(int);
        void setInterest_rate(float);

        int getMax_Transactions() const;
        float getInterest_Rate() const;

        void printAccount_Owner();
        void printAccount_Information();
};