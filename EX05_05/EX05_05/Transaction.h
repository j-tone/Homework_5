#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Date.h"
#include <string>
using namespace std;

class Transaction{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction(char type, double amount, double balance, string description, Date date);
	char getType();
	double getAmount();
	double getBalance();
	string getDescription();
};

#endif