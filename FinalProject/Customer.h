#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Customer {

private:
	string firstName, lastName, streetName, streetType, city, state, phoneNumber;
	int accountNumber, zipCode, houseNumber;

public:
	Customer(string firstName, string lastName, int accountNumber, int houseNumber, string streetName, string streetType, string city, string state, int zipCode, string phoneNumber);
	Customer();
	string getFirstName();
	string getLastName();
	int getAccountNumber();
	int getHouseNumber();
	string getStreetName();
	string getStreetType();
	string getCity();
	string getState();
	int getZipCode();
	string getPhoneNumber();
	void printCustomer();
	void operator=(Customer dude);
};

#endif
