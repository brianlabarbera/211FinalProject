#ifndef ALLPURCHASES_H
#define ALLPURCHASES_H
#include "Purchase.h"
#include <vector>

class AllPurchases {

private:
	vector<Purchase> allPurchases;

public:
	void addPurchaseVector(Purchase purchases);
	string getSpecificPurchaseTotal(int userinput3);
};

#endif