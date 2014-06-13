#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account{
private:
	int id;
	string name;
	
	double balance;
	double annualInterestRate;

public:
	Account();
	Account(string name, int id, double balance, double aIr);
	int getID();
	double getBalance();
	string getName();
	double getannualInterestRate();
	void setID(int id);
	void setBalance(double balance);
	void setannualInterestRate(double aIr);
	double getmonthlyInterestRate();
	void withdraw(Transaction &t);
	void deposit(Transaction &t);
	vector<Transaction> transactions;
};

#endif