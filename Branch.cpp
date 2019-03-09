#include <iostream>
#include <Branch.h>
using namespace std;

Branch::Branch(){
    int branchId=0;
    string address="";
    string telephoneNumber="";
    vector <Account> accounts;
    }
Branch::Branch(int branchId,string address,string telephoneNumber,vector accounts){
    this->branchId=branchId;
    this->address=address;
    this->telephoneNumber=telephoneNumber;
    this->accounts = accounts;
    ;}
Branch::~Branch(){
    cout << "Destructing Branch object!" << endl;
    }
void Branch::setAddress(string address){
    this->address=address;}

void Branch::setTelephoneNumber(string telephoneNumber){
    this->telephoneNumber=telephoneNumber;}

int Branch::getBranchId(){
    return branchId;}

string Branch::getAddress(){
    return address;}

string Branch::getTelephoneNumber(){
    return telephoneNumber;}

vector Branch::<Account> getAccounts(){
    return accounts;}

bool Branch::addAccount(Account account){
    push_back(account);}//modify

bool Branch::deleteAccount(int accountId){
    vector <Account> accounts::iterator it;
    it = accountId;
    it = accounts.begin();
    it = accounts.erase(it);
}

void Branch::printAccounts(){
    cout<<accounts<<endl;}//list all accounts

bool Branch::customerToThisBranch(Customer customer){
    ;}
