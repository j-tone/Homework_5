#include <string>
#include "Account.h"
using namespace std;

Account::Account(){
	id = 0;
	balance = 0;
}

Account::Account(string name, int id, double balance, double aIr){
	this->name = name;
	this->id = id;
	this->balance = balance;
	annualInterestRate = aIr;
}

int Account::getID(){
	return id;
}

double Account::getBalance(){
	return balance;
}

string Account::getName(){
	return name;
}

double Account::getannualInterestRate(){
	return annualInterestRate;
}

void Account::setID(int id){
	this->id = id;
}

void Account::setBalance(double balance){
	this->balance = balance;
}

void Account::setannualInterestRate(double aIr){
	annualInterestRate = aIr;
}

double Account::getmonthlyInterestRate(){
	return annualInterestRate / 12;
}

void Account::withdraw(Transaction &t){
	transactions.push_back(t);
	balance = balance - t.getAmount();
}

void Account::deposit(Transaction &t){
	transactions.push_back(t);
	balance = balance + t.getAmount();
}