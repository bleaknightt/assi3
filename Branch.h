#include <iostream>
#include <Branch.h>

class Branch {
    int branchId=0;
    std::string address="";
    std::string telephoneNumber="";
    std::vector <Account> accounts;
public:
    Branch();
    Branch(int,std::string,std::string,std::vector);
    ~Branch();
    void setAddress(std::string);
    void setTelephoneNumber(std::string);
    int getBranchId();
    std::string getAddress();
    std::string getTelephoneNumber();
    std::vector <Account> getAccounts();
    bool addAccount(Account account);//modify
    bool deleteAccount(int accountId);
    void printAccounts();//list all accounts
    bool customerToThisBranch(Customer customer);
};
/*A branch has the following attributes:
Branch ID
Address
Telephone number
List of accounts associated with this branch

Typical operations associated with a branch are:
Function that modify branch attributes except branch id
Functions that return branch attributes (id, address, tel, number of accounts, etc.)
Add a new account
Delete an existing account
List all  accounts
Print information about a given account
List customers of the branch
Return true if a given customer is a customer of this branch*/
