#include "AllPurchases.h"
using namespace std;

void AllPurchases::addPurchaseVector(Purchase purchases) {

	allPurchases.push_back(purchases);

}

string AllPurchases::getSpecificPurchaseTotal(int userinput3) {

	return allPurchases.at(userinput3 - 1).getTotal();

}
