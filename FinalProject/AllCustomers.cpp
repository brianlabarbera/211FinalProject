#include "AllCustomers.h"
using namespace std;

void AllCustomers::addCustomerVector(Customer customers) {
	allCustomers.push_back(customers);
}

void AllCustomers::printCustomerList() {

	for (int i = 0; i < allCustomers.size(); i++) {
		allCustomers.at(i).printCustomer();

		cout << endl;
	}

	cout << endl;

}

void AllCustomers::printCustomerListNumber() {

	for (int i = 0; i < allCustomers.size(); i++) {

		cout << i + 1 << ". " << allCustomers.at(i).getFirstName() << endl;

	}

	cout << endl;

}

void AllCustomers::sortCustomerList() {             //Insertion sort algorithm

	int i, j;
	Customer key;

	for (i = 1; i < allCustomers.size(); i++) {

		key = allCustomers.at(i);

		j = i - 1;

		while (j >= 0 && allCustomers.at(j).getFirstName() > key.getFirstName())
		{
			allCustomers.at(j + 1) = allCustomers.at(j);

			j = j - 1;
		}

		allCustomers.at(j + 1) = key;

	}

}

Customer AllCustomers::getSpecificCustomer(int userinput2) {

	return allCustomers.at(userinput2 - 1);

}