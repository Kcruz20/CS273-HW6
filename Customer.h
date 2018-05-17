#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
using std::string;

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates,
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	string name;
	string address;
	int age;
	string number; // telephone number
	string type;
	int id;
public:
	// Constructors
	Customer() {}
	Customer(string n, string ad, int a, string num, int accn) {
		name = n;
		address = ad;
		age = a;
		number = num;
		id = accn;
	}

	// Generic Get/Set functions for customer params
	string get_name() { return name; }
	void set_name(string n) { name = n; }

	string get_address() { return address; }
	void set_address(string a) { address = a; }

	int get_age() { return age; }
	void set_age(int a) { age = a; }

	string get_number() { return number; }
	void set_number(int num) { number = num; }

	int get_id() { return id; }
	void set_id(int i) { id = i; }

	virtual double get_check_int() = 0;
	virtual double get_saving_int() = 0;
	virtual double get_check_chrg() = 0;
	virtual double get_overdraft() = 0;


};

//Senior, Student, and Adult classes
class Senior : public Customer
{
private:
	const double check_interest = .04;
	const double saving_interest = .05;
	const double check_charge = 10;
	const double overdraft_fee = 20;
public:
	Senior(string n, string ad, int a, string num, int id) : Customer(n, ad, a, num, id) {};
	double get_check_int() { return check_interest; }
	double get_saving_int() { return saving_interest; }
	double get_check_chrg() { return check_charge; }
	double get_overdraft() { return overdraft_fee; }
};

class Student : public Customer
{
private:
	const double check_interest = .02;
	const double saving_interest = .03;
	const double check_charge = 15;
	const double overdraft_fee = 25;
public:
	Student(string n, string ad, int a, string num, int id) : Customer(n, ad, a, num, id) {};
	double get_check_int() { return check_interest; }
	double get_saving_int() { return saving_interest; }
	double get_check_chrg() { return check_charge; }
	double get_overdraft() { return overdraft_fee; }
};

class Adult : public Customer
{
private:
	const double check_interest = .03;
	const double saving_interest = .04;
	const double check_charge = 20;
	const double overdraft_fee = 30;
public:
	Adult(string n, string ad, int a, string num, int id) : Customer(n, ad, a, num, id) {};
	double get_check_int() { return check_interest; }
	double get_saving_int() { return saving_interest; }
	double get_check_chrg() { return check_charge; }
	double get_overdraft() { return overdraft_fee; }
};


#endif