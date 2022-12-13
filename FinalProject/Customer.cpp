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

void Customer::updateCustomer() {   //function to update a customer

	int userinput;

	cout << endl;
	cout << "What would you like to update?" << endl;
	cout << "1. First name" << endl;
	cout << "2. Last name" << endl;
	cout << "3. Account number" << endl;
	cout << "4. House number" << endl;
	cout << "5. Street name" << endl;
	cout << "6. Street type" << endl;
	cout << "7. City" << endl;
	cout << "8. State" << endl;
	cout << "9. Zip code" << endl;
	cout << "10. Phone number" << endl;

	cin >> userinput;

	cout << endl;

	switch (userinput) {

	case 1:
	{
		string newFirstName;

		cout << "Enter new first name" << endl;
		cin >> newFirstName;

		cout << endl;

		firstName = newFirstName;

		cout << "Name is now set to " << firstName << endl;

		break;
	}
	case 2:
	{
		string newLastName;

		cout << "Enter new last name" << endl;
		cin >> newLastName;

		cout << endl;

		lastName = newLastName;

		cout << "Name is now set to " << lastName << endl;

		break;
	}
	case 3:
	{
		int newAccountNumber;

		cout << "Enter new account number" << endl;
		cin >> newAccountNumber;

		cout << endl;

		accountNumber = newAccountNumber;

		cout << "Account number is now set to " << accountNumber << endl;

		break;
	}
	case 4:
	{
		int newHouseNumber;

		cout << "Enter new house number" << endl;
		cin >> newHouseNumber;

		cout << endl;

		houseNumber = newHouseNumber;

		cout << "House number is now set to " << houseNumber << endl;

		break;
	}
	case 5:
	{
		string newStreetName;

		cout << "Enter new street name" << endl;
		cin >> newStreetName;

		cout << endl;

		streetName = newStreetName;

		cout << "Street name is now set to " << streetName << endl;

		break;
	}
	case 6:
	{
		string newStreetType;

		cout << "Enter new street type" << endl;
		cin >> newStreetType;

		cout << endl;

		streetType = newStreetType;

		cout << "Street type is now set to " << streetType << endl;

		break;
	}
	case 7:
	{
		string newCity;

		cout << "Enter new city" << endl;
		cin >> newCity;

		cout << endl;

		city = newCity;

		cout << "City is now set to " << city << endl;

		break;
	}
	case 8:
	{
		string newState;

		cout << "Enter new state" << endl;
		cin >> newState;

		cout << endl;

		city = newState;

		cout << "State is now set to " << state << endl;

		break;
	}
	case 9:
	{
		int newZipCode;

		cout << "Enter new zip code" << endl;
		cin >> newZipCode;

		cout << endl;

		zipCode = newZipCode;

		cout << "Zip code is now set to " << zipCode << endl;

		break;
	}
	case 10:
	{
		string newPhoneNumber;

		cout << "Enter new phone number" << endl;
		cin >> newPhoneNumber;

		cout << endl;

		phoneNumber = newPhoneNumber;

		cout << "Phone number is now set to " << phoneNumber << endl;

		break;
	}
	}
}

void Customer::printCustomer() {  //function to print a customer 
	cout << firstName << " " << lastName << " " << accountNumber << " " << houseNumber << " " << streetName << " " << streetType << " " << city << " " << state << " " << zipCode << " " << phoneNumber << endl;
}

void Customer::outputCustomer(ofstream& customerOutputFile) { //function to output customer info to a file

	customerOutputFile << firstName << " " << lastName << " " << accountNumber << " " << houseNumber << " " << streetName << " " << streetType << " " << city << " " << state << " " << zipCode << " " << phoneNumber << endl;

	cout << "Data exported to newcustomers.txt" << endl;
}

void Customer::operator=(Customer dude) {           //function to set customer equal to another customer
	
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