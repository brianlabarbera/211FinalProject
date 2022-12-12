#include "Customer.h"
#include "AllCustomers.h"
#include "Purchase.h"
using namespace std;

int main() {

	vector<Customer> customers; //AllCustomers

	ifstream customerFile("customers.txt");
	ifstream purchaseFile("purchases.txt");

	string tempFirstName, tempLastName, tempStreetName, tempStreetType, tempCity, tempState, tempPhoneNumber;
	int tempAccountNumber, tempZipCode, tempHouseNumber, userinput;
	double tempPrice, tempPrice2, tempPrice3, tempPrice4;
	AllCustomers CustomersList;

	while (customerFile >> tempFirstName >> tempLastName >> tempAccountNumber >> tempHouseNumber >> tempStreetName >> tempStreetType >> tempCity >> tempState >> tempZipCode >> tempPhoneNumber) {

		Customer customer(tempFirstName, tempLastName, tempAccountNumber, tempHouseNumber, tempStreetName, tempStreetType, tempCity, tempState, tempZipCode, tempPhoneNumber);

		customers.push_back(customer);

	}

	customerFile.close();

	for (int i = 0; i < customers.size(); i++) {
		CustomersList.addCustomerVector(customers.at(i));
	}

	do {
		cout << "Enter the number for what you'd like to do:" << endl;
		cout << "1. View all customers" << endl;
		cout << "2. View a specific customer" << endl;
		cout << "3. View customers in ascending order" << endl;
		cout << "4. View a customer's total" << endl;
		cout << "5. Add a customer" << endl;
		cout << "6. Add multiple customers" << endl;
		cout << "7. Add a new customer purchase" << endl;
		cout << "8. Add multiple new customer purchases'" << endl;
		cout << "9. Update a customer's information" << endl;
		cout << "10. Delete a customer's information" << endl;
		cout << "11. Export data to file" << endl;
		cout << "Enter any other keys to end the program." << endl;

		cout << endl;

		cin >> userinput;

		cout << endl;

		switch (userinput) {

		case 1:
			for (int i = 0; i < customers.size(); i++) {
				customers.at(i).printCustomer();

				cout << endl;
			}

			cout << endl;

			break;

		case 2:
			int userinput2;

			cout << "Which customer?" << endl;

			CustomersList.printCustomerListNumber();

			cin >> userinput2;

			CustomersList.getSpecificCustomer(userinput2).printCustomer();

			cout << endl;

			break;

		case 3:
			CustomersList.sortCustomerList();

			CustomersList.printCustomerList();

		}


	} while (userinput > 0 && userinput <= 11);


	return 0;
}