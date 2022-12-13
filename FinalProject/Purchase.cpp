#include "Purchase.h"
using namespace std;

Purchase::Purchase(int accountNumber, string item, string date, string total) {   //constructor

	this->accountNumber = accountNumber;
	this->item = item;
	this->date = date;
	this->total = total;
}

 int Purchase::getAccountNumberp() {
	
	return accountNumber;
}

 string Purchase::getItem() {
	 
	 return item;
 }

 string Purchase::getDate() {

	 return date;
 }

 string Purchase::getTotal() {

	 return total;
 }

 void Purchase::outputPurchase(ofstream& purchaseOutputFile) { //function to output customer info to a file

	 purchaseOutputFile << accountNumber << " " << item << " " << date << " " << total << endl;

	 cout << "Data exported to newpurchases.txt" << endl;
 }

 void Purchase::printPurchase() {

	 cout << accountNumber << " " << item << " " << date << " " << total << endl;
 }
