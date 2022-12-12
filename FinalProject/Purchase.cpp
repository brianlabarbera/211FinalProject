#include "Purchase.h"
using namespace std;

Purchase::Purchase(int accountNumber, string item, string date, string total) {

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

 void Purchase::printPurchase() {

	 cout << accountNumber << " " << item << " " << date << " " << total << endl;
 }

 void Purchase::printTotal() {

	 cout << total << endl;
 }