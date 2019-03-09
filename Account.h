#pragma once

#include <iostream>

class Account
{
    private:
        int account_number;
        float balance;
        float transaction_fee;
        std::string account_owner;

    public:
        Account();
        Account(int, float, float, std::string);
        ~Account();

        void setAccount_number(int);
        void setBalance(float);
        void setTransaction_Fee(float);
        void setAccount_Owner(std::string);

        int getAccount_Number() const;
        float getBalance() const;
        float getTransaction_Fee() const;
        std::string getAccount_Owner() const;

        virtual void printAccount_Owner() = 0;
        virtual void printAccount_Information() = 0;
        };