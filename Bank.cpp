//
//  main.cpp
//  Bank.cpp
//
//  Created by Joeun Park on 3/9/19.
//  Copyright © 2019 Joeun Park. All rights reserved.
//

#include <iostream>
#include <Bank.h>
using namespace std;
Bank::Bank(){
    int bankId=0;
    string name="";
    string address="";
    string telephoneNumber="";
    vector <Branch> branches;
    }
Bank::Bank(int bankId,string name,string address,string telephoneNumber,vector branches){
    this->bankId=bankId;
    this->name=name;
    this->address=address;
    this->telephoneNumber=telephoneNumber;
    this->branches = branches;
}
Bank::~Bank(){cout << "Destructing Bank object!" << endl;}

void Bank::setName(string name){
    this->name=name;}

void Bank::setAddress(string address){
    this->address=address;}

void Bank::setTelephoneNumber(string telephoneNumber){
    this->telephoneNumber=telephoneNumber;}

int Bank::getBankId(){
    return bankId;}

string Bank::getName(){
    return name;}

string Bank::getAddress(){
    return address;}

string Bank::getTelephoneNumber(){
    return telephoneNumber;}

vector <Branch> Bank::getBranches(){
    return branches;}

bool Bank::addBranch(Branch branch){
    ;}
//modify
bool Bank::deleteBranch(int branchId){
    ;}

void Bank::printBranches(){
    cout<<branches<<endl;}

void Bank::printAccountsGivenBranch(int branchId){
    
    ;}

void Bank::printCustomersGivenBranch(int branchId){
    ;}

void Bank::printSpecificCustomer(int customerId){
    ;}
