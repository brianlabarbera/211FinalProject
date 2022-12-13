#include "AllPurchases.h"
using namespace std;

void AllPurchases::addPurchaseVector(Purchase purchases) {   //function to add purchases to a vector

	allPurchases.push_back(purchases);

}

void AllPurchases::addNewPurchase() {    //function to add a new purchase to the vector
	
	string item, date, total;
	int accountNumber;

	cout << "Enter customer account number:" << endl;
	cin >> accountNumber;

	cout << "Enter the name of the item:" << endl;
	cin >> item;

	cout << "Enter the date of transaction:" << endl;
	cin >> date;

	cout << "Enter the total:" << endl;
	cin >> total;

	Purchase newPurchase(accountNumber, item, date, total);

	allPurchases.push_back(newPurchase);

	char userinput;

	cout << "Add another purchase? Y/N" << endl;

	cin >> userinput;

	if (userinput == 'y' || userinput == 'Y') {

		addNewPurchase();           //recursive function to add multiple new purchases

	}
}

void AllPurchases::outputPurchase(ofstream& purchaseOutputFile) {    //function to output customers to a file

	for (int i = 0; i < allPurchases.size(); i++) {

		allPurchases.at(i).outputPurchase(purchaseOutputFile);

	}

}

string AllPurchases::getSpecificPurchaseTotal(int userinput3) {   //function to get a specific purchase

	return allPurchases.at(userinput3 - 1).getTotal();

}
