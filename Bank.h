#include <iostream>
#include <Bank.h>
class Bank {
    int bankId=0;
    std::string name="";
    std::string address="";
    std::string telephoneNumber="";
    std::vector <Branch> branches;
public:
    Bank();
    Bank(int,std::string,std::string,std::string,std::vector);
    ~Bank();
    void setName(std::string);
    void setAddress(std::string);
    void setTelephoneNumber(std::string);
    int getBankId();
    std::string getName();
    std::string getAddress();
    std::string getTelephoneNumber();
    std::vector <Branch> getBranches();
    bool addBranch(Branch branch);//modify
    bool deleteBranch(int branchId);
    void printBranches();//list all branches
    void printAccountsGivenBranch(int branchId);
    void printCustomersGivenBranch(int branchId);
    void printSpecificCustomer(int customerId);
};
/*
 Bank Management System
 
 We want to create a system to manage bank accounts. A bank has many branches. Each branch has a number of associated bank accounts. There are two types of accounts:  Savings and chequing accounts. A customer of a bank can have many accounts. An account must belong to one customer only.
 
 A bank has the following attributes:
 Bank id
 Name
 Address
 Telephone number
 List of branches
 
 Typical operations are:
 Functions that modify bank attributes except bank id
 Functions that return bank attributes (id, address, tel, number of branches, etc.)
 Add a new branch
 Delete an existing branch
 List all branches
 List accounts of a given branch
 List customers of a given branch
 Print information about a specific branch
 Print information about a specific account
 Print information about a specific customer
 */

