#ifndef CHECKINGS_H
#define CHECKINGS_H
#include "Customer.h"
#include "Account.h"

class Checkings_Account : public Account {
private:
	int id;
	Customer *customer;
	int interest;

public:
	Checkings_Account(Customer *cust, int num) : Account(cust, num) {
		customer = cust;
		id = num;
		interest = cust->get_check_int();
	}
	void add_interest() {
		balance += balance*interest;
	}
};

#endif