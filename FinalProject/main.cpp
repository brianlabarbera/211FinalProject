#include "Customer.h"
#include "AllCustomers.h"
#include "Purchase.h"
#include "AllPurchases.h"
using namespace std;

int main() {

	vector<Customer> customers; //AllCustomers
	vector<Purchase> purchases; //AllPurchases

	ifstream customerFile("customers.txt"); //input files
	ifstream purchaseFile("purchases.txt");

	ofstream customerOutputFile("newcustomers.txt"); //output files
	ofstream purchaseOutputFile("newpurchases.txt");

	string tempFirstName, tempLastName, tempStreetName, tempStreetType, tempCity, tempState, tempPhoneNumber, tempItem, tempDate, tempTotal;
	int tempAccountNumber, tempZipCode, tempHouseNumber, tempAccountNumberp, userinput;
	AllCustomers CustomersList;
	AllPurchases PurchasesList;

	while (customerFile >> tempFirstName >> tempLastName >> tempAccountNumber >> tempHouseNumber >> tempStreetName >> tempStreetType >> tempCity >> tempState >> tempZipCode >> tempPhoneNumber) { //reads in customer info

		Customer customer(tempFirstName, tempLastName, tempAccountNumber, tempHouseNumber, tempStreetName, tempStreetType, tempCity, tempState, tempZipCode, tempPhoneNumber);

		customers.push_back(customer);

	}

	customerFile.close();

	for (int i = 0; i < customers.size(); i++) {   //puts customers in a vector
		CustomersList.addCustomerVector(customers.at(i));
	}

	while (purchaseFile >> tempAccountNumberp >> tempItem >> tempDate >> tempTotal) {  //reads purchase info

		Purchase purchase(tempAccountNumberp, tempItem, tempDate, tempTotal);

		purchases.push_back(purchase);

	}

	purchaseFile.close();

	for (int i = 0; i < purchases.size(); i++) {    //puts purchases in a vector
		PurchasesList.addPurchaseVector(purchases.at(i));
	}

	do {     //start of looping menu
		cout << "Brian's Video Game Store" << endl;
		cout << "Enter the number for what you'd like to do:" << endl;
		cout << "1. View all customers" << endl;
		cout << "2. View a specific customer" << endl;
		cout << "3. View customers in ascending order" << endl;
		cout << "4. View a customers total" << endl;
		cout << "5. Add a customer" << endl;
		cout << "6. Add a new purchase" << endl;
		cout << "7. Update a customer's information" << endl;
		cout << "8. Delete a customer's information" << endl;
		cout << "9. Export data to file" << endl;
		cout << "Enter any other keys to end the program." << endl;

		cout << endl;

		cin >> userinput;

		cout << endl;

		switch (userinput) {

		case 1:
			CustomersList.printCustomerList();

			cout << endl;

			break;

		case 2:
			int userinput2;

			cout << "Which customer?" << endl;

			CustomersList.printCustomerListNumber();

			cin >> userinput2;

			cout << endl;

			CustomersList.getSpecificCustomer(userinput2).printCustomer();

			cout << endl;

			break;

		case 3:
			CustomersList.sortCustomerList();

			CustomersList.printCustomerList();
			
			break;

		case 4:
			int userinput3;

			cout << "Which customer?" << endl;

			CustomersList.printCustomerListNumber();

			cin >> userinput3;

			cout << endl;

			cout << PurchasesList.getSpecificPurchaseTotal(userinput3) << endl;

			break;

		case 5:
			CustomersList.addNewCustomer();

			break;

		case 6:
			PurchasesList.addNewPurchase();

			break;

		case 7:
			int userinput4;

			cout << "Which customer?" << endl;

			CustomersList.printCustomerListNumber();

			cin >> userinput4;

			CustomersList.getCustomerUpdate(userinput4);

			cout << endl;

			break;

		case 8:
			int userinput5;

			cout << "Which customer?" << endl;

			CustomersList.printCustomerListNumber();

			cin >> userinput5;

			cout << endl;

			CustomersList.deleteCustomer(userinput5);

			break;

		case 9:

			CustomersList.outputCustomers(customerOutputFile);
			PurchasesList.outputPurchase(purchaseOutputFile);

		}

	} while (userinput > 0 && userinput <= 11);


	return 0;
}