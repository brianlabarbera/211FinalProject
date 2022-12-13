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
	Customer(string firstName, string lastName, int accountNumber, int houseNumber, string streetName, string streetType, string city, string state, int zipCode, string phoneNumber); //constructor
	Customer(); //default constructor
	string getFirstName(); //function to get first name
	string getLastName(); //function to get last name
	int getAccountNumber(); //function to get account number
	int getHouseNumber(); //function to get house number
	string getStreetName(); //function to get street name
	string getStreetType(); //function to get street type
	string getCity(); //function to get city
	string getState(); //function to get state
	int getZipCode(); //function to get zipcode
	string getPhoneNumber(); //function to get phone number
	void updateCustomer(); //function to update a customer
	void printCustomer(); //function to print a customer 
	void outputCustomer(ofstream& customerOutputFile); //function to output customer info to a file
	void operator=(Customer dude); //function to set customer equal to another customer 
};

#endif
