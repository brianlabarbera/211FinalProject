#ifndef PURCHASE_H
#define PURCHASE_H
#include <iostream>
#include <string>
using namespace std;

class Purchase {

private:
	string item, date, total;
	int accountNumber;

public:
	Purchase(int accountNumber, string item, string date, string total);
	int getAccountNumberp();
	string getItem();
	string getDate();
	string getTotal();
	void printPurchase();
	void printTotal();
};

#endif