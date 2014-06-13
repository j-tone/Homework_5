#include "Transaction.h"
#include <string>
#include <iostream>
using namespace std;

Transaction::Transaction(char type, double amount, double balance, string description, Date date){
	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;
	this->date = date;
}

char Transaction::getType(){
	return type;
}

double Transaction::getAmount(){
	return amount;
}

double Transaction::getBalance(){
	return balance;
}

string Transaction::getDescription(){
	return description;
}