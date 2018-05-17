#include "Account.h"

#ifndef SAVINGS_H
#define SAVINGS_H

class Savings_Account : public Account {
private:
	int id;
	Customer *customer;
	int interest;

public:
	Savings_Account(Customer *cust, int num) : Account(cust, num) {
		customer = cust;
		id = num;
		interest = cust->get_saving_int();
	}
	void add_interest() {
		balance += balance*interest;
	}
};

#endif
