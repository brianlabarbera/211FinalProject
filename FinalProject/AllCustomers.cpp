#include "AllCustomers.h"
using namespace std;

void AllCustomers::addCustomerVector(Customer customers) {
	allCustomers.push_back(customers);
}

void AllCustomers::printCustomerList() {    //function to print customers

	for (int i = 0; i < allCustomers.size(); i++) {
		allCustomers.at(i).printCustomer();

		cout << endl;
	}

	cout << endl;

}

void AllCustomers::printCustomerListNumber() {    //function to print customers with a number preceding the names

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

void AllCustomers::addNewCustomer() {    //function to add a new customer to the vector

	string firstName, lastName, streetName, streetType, city, state, phoneNumber;
	int accountNumber, zipCode, houseNumber;

	cout << "Enter customer's first name:" << endl;
	cin >> firstName;

	cout << "Enter customer's last name:" << endl;
	cin >> lastName;

	cout << "Enter customer's account number:" << endl;
	cin >> accountNumber;

	cout << "Enter customer's house number:" << endl;
	cin >> houseNumber;

	cout << "Enter customer's street name:" << endl;
	cin >> streetName;

	cout << "Enter customer's street type:" << endl;
	cin >> streetType;

	cout << "Enter customer's city:" << endl;
	cin >> city;

	cout << "Enter customer's state:" << endl;
	cin >> state;

	cout << "Enter customer's zip code:" << endl;
	cin >> zipCode;

	cout << "Enter cusomter's phone number:" << endl;
	cin >> phoneNumber;

	Customer newCustomer(firstName, lastName, accountNumber, houseNumber, streetName, streetType, city, state, zipCode, phoneNumber);

	allCustomers.push_back(newCustomer);

	char userinput;

	cout << "Add another customer? Y/N" << endl;           

	cin >> userinput;                                         

	if (userinput == 'y' || userinput == 'Y') { 

		addNewCustomer();                           //recursive function to add multiple customers

	}

}

void AllCustomers::deleteCustomer(int userinput5) {     //function to delete a customer from the vector

	allCustomers.erase(allCustomers.begin()+userinput5 - 1);

}

void AllCustomers::getCustomerUpdate(int userinput4) {   //function to get a customers updated info

	allCustomers.at(userinput4 - 1).updateCustomer();

}
   
void AllCustomers::outputCustomers(ofstream& customerOutputFile) {    //function to output customers to a file

	for (int i = 0; i < allCustomers.size(); i++) {

		allCustomers.at(i).outputCustomer(customerOutputFile);

	}

}

Customer AllCustomers::getSpecificCustomer(int userinput2) {   //function to retrieve a specific customers info

	return allCustomers.at(userinput2 - 1);

}