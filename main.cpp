#include <iostream>
#include <string>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"

using namespace std;

int main()
{
    Savings *s1, *s2;
    s1 = new Savings;
    s2 = new Savings(5, 0.5, 1337, 500, 1.50, "Jonah Dorant");

    s1->printAccount_Information();
    cout << endl;
    s2->printAccount_Information();







    return 0;
}