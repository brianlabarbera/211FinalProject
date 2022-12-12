#ifndef ALLCUSTOMERS_H
#define ALLCUSTOMERS_H
#include "Customer.h"

class AllCustomers {

private:
	vector<Customer> allCustomers;

public:
	void addCustomerVector(Customer customers);
	void printCustomerList();
	void printCustomerListNumber();
	void sortCustomerList();
	Customer getSpecificCustomer(int userinput2);
};

#endif
