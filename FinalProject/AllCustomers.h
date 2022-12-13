#ifndef ALLCUSTOMERS_H
#define ALLCUSTOMERS_H
#include "Customer.h"

class AllCustomers {

private:
	vector<Customer> allCustomers;

public:
	void addCustomerVector(Customer customers);  //function to add customers to vector allCustomers
	void printCustomerList(); //function to print customers
	void printCustomerListNumber(); //function to print customers with a number preceding the names
	void sortCustomerList(); //function to sort customers in ascending order
	void addNewCustomer(); //function to add a new customer to the vector
	void deleteCustomer(int userinput5); //function to delete a customer from the vector
	void getCustomerUpdate(int userinput4); //function to retrieve updated customer information
	void outputCustomers(ofstream& customerOutputFile); //function to output customers to a file
	Customer getSpecificCustomer(int userinput2); //function to retrieve a specific customers info
};

#endif
