#include "Handbook.h"

Handbook::Handbook(string company_name, string owner, string tel_number, string adress, string occupation) {
	this->company_name = company_name;
	this->owner = owner;
	this->tel_number = tel_number;
	this->adress = adress;
	this->occupation = occupation;
}

void Handbook::SetCompanyName(string company_name){
	this->company_name = company_name;
}

void Handbook::SetOwner(string owner) {
	this->owner = owner;
}

void Handbook::SetTelephoneNumber(string tel_number) {
	this->tel_number = tel_number;
}

void Handbook::SetAdress(string adress) {
	this->adress = adress;
}

void Handbook::SetOccupation(string occupation) {
	this->occupation = occupation;
}

string Handbook::GetCompanyName() {
	return company_name;
}

string Handbook::GetOwner() {
	return owner;
}

string Handbook::GetTelephoneNumber() {
	return tel_number;
}

string Handbook::GetAdress() {
	return adress;
}

string Handbook::GetOccupation() {
	return occupation;
}

void Handbook::Input() {
	cout << "Enter company name: ";
	cin >> company_name;
	cout << "Enter company owner: ";
	cin >> owner;
	cout << "Enter telephone number: ";
	cin >> tel_number;
	cout << "Enter adress: ";
	cin >> adress;
	cout << "Enter occupation: ";
	cin >> occupation;
}

void Handbook::Print() {
	if (this == nullptr) {
		cout << "Object is empty!" << endl;
		return;
	}
	cout << "Company name: " << company_name << endl;
	cout << "Owner: " << owner << endl;
	cout << "Telephone number: " << tel_number << endl;
	cout << "Adress: " << adress << endl;
	cout << "Ocuppation: " << occupation << endl << endl;
}