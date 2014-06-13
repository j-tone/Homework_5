#include <iostream>
#include <vector>
#include "Account.h"
#include "Transaction.h"
#include "Date.h"
using namespace std;

int main()
{
	Account A("George", 1122, 1000, 1.5);
	Date D(4433666), D1(482993220), D2(2119831890);
	Transaction t1('D', 30, 1030, "Deposit from gig", D);
	Transaction t2('D', 40, 1070, "Deposit from 'side job'", D1);
	Transaction t3('D', 50, 1120, "Deposit just because", D1);
	Transaction t4('W', 5, 1115, "Need Taco Bell", D2);
	Transaction t5('W', 4, 1111, "More Taco Bell", D2);
	Transaction t6('W', 2, 1109, "MORE TACO BELL", D2);

	A.deposit(t1);
	A.deposit(t2);
	A.deposit(t3);
	A.withdraw(t4);
	A.withdraw(t5);
	A.withdraw(t6);

	cout << "The account holder is: " << A.getName() << endl;
	cout << "His interest rate is: " << A.getannualInterestRate() << endl;
	cout << "His balance is a whopping " << A.getBalance() << endl;
	cout << "His transactions include: " << endl;
	for (int i = 0; i < 6; i++){
		cout << A.transactions[i].getDescription() << " " << A.transactions[i].getAmount() << " " << A.transactions[i].getType() << endl;
	}
}