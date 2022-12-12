#include "Customer.h"
using namespace std;

Customer::Customer(string firstName, string lastName, int accountNumber, int houseNumber, string streetName, string streetType, string city, string state, int zipCode, string phoneNumber) {

	this->firstName = firstName;
	this->lastName = lastName;
	this->accountNumber = accountNumber;
	this->houseNumber = houseNumber;
	this->streetName = streetName;
	this->streetType = streetType;
	this->city = city;
	this->state = state;
	this->zipCode = zipCode;
	this->phoneNumber = phoneNumber;
}

Customer::Customer() {

	firstName = " ";
	lastName = " ";
	accountNumber = 0;
	houseNumber = 0;
	streetName = " ";
	streetType = " ";
	city = " ";
	state = " ";
	zipCode = 0;
	phoneNumber = " ";
}

string Customer::getFirstName() {
	return firstName;
}

string Customer::getLastName() {
	return lastName;
}

int Customer::getAccountNumber() {
	return accountNumber;
}

int Customer::getHouseNumber() {
	return houseNumber;
}

string Customer::getStreetName() {
	return streetName;
}

string Customer::getStreetType() {
	return streetType;
}

string Customer::getCity() {
	return city;
}

string Customer::getState() {
	return state;
}

int Customer::getZipCode() {
	return zipCode;
}

string Customer::getPhoneNumber() {
	return phoneNumber;
}

void Customer::printCustomer() {
	cout << firstName << " " << lastName << " " << accountNumber << " " << houseNumber << " " << streetName << " " << streetType << " " << city << " " << state << " " << zipCode << " " << phoneNumber << endl;
}

void Customer::operator=(Customer dude) {

	firstName = dude.firstName;
	lastName = dude.lastName;
	accountNumber = dude.accountNumber;
	houseNumber = dude.houseNumber;
	streetName = dude.streetName;
	streetType = dude.streetType;
	city = dude.city;
	state = dude.state;
	zipCode = dude.zipCode;
	phoneNumber = dude.phoneNumber;
}