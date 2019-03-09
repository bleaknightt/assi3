#pragma once

#include <iostream>
#include "Account.h"

class Checking : public Account
{
    private:
        bool privilege_cheque;
        float overdraft_limit;

    public:
        Checking();
        Checking(bool, float, int, float, float, std::string);
        ~Checking();

        void setPrivilege_Cheque(bool);
        void setOverdraft_Limit(float);

        bool getPrivilege_Cheque();
        float getOverdraft_limit();

        void printAccount_Owner();
        void printAccount_Information();
};