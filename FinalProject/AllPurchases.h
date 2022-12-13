#ifndef ALLPURCHASES_H
#define ALLPURCHASES_H
#include "Purchase.h"
#include <vector>

class AllPurchases {

private:
	vector<Purchase> allPurchases;

public:
	void addPurchaseVector(Purchase purchases);  //function to add purchases to a vector
	void addNewPurchase(); //function to add a new purchase to the vector
	void outputPurchase(ofstream& purchaseOutputFile); //function to output purchases
	string getSpecificPurchaseTotal(int userinput3); //function to get a specific purchase
};

#endif