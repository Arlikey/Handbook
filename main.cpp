#include <iostream>
#include <fstream>
#include "Handbook.h"
#include "List.cpp"
using namespace std;

int List::count = 0;

void SaveToFile(List list) {
	ofstream wr("Handbook.txt", ios::out | ios::app);

	for (int i = 0; i < list.get_count(); i++)
	{
		wr << "Company Name: " << list[i]->contact.GetCompanyName() << endl;
		wr << "Owner: " << list[i]->contact.GetOwner() << endl;
		wr << "Telephone Number: " << list[i]->contact.GetTelephoneNumber() << endl;
		wr << "Adress: " << list[i]->contact.GetAdress() << endl;
		wr << "Occupation: " << list[i]->contact.GetOccupation() << endl << endl;
	}

	wr.close();
}

Handbook* findByCompanyName(List list, string s) {
	for (size_t i = 0; i < list.get_count(); i++)
	{
		if (list[i]->contact.GetCompanyName() == s)
		{
			cout << "Object found by company name:" << endl;
			return &list[i]->contact;
		}
	}
	cout << "Object is not found!" << endl;
	return nullptr;
}

Handbook* findByOccupation(List list, string s) {
	for (size_t i = 0; i < list.get_count(); i++)
	{
		if (list[i]->contact.GetOccupation() == s)
		{
			cout << "Object found by occupation:" << endl;
			return &list[i]->contact;
		}
	}
	cout << "Object is not found!" << endl;
	return nullptr;
}

Handbook* findByOwner(List list, string s) {
	for (size_t i = 0; i < list.get_count(); i++)
	{
		if (list[i]->contact.GetOwner() == s)
		{
			cout << "\nObject found by owner:" << endl;
			return &list[i]->contact;
		}
	}
	cout << "Object is not found!" << endl;
	return nullptr;
}

Handbook* findByTelephoneNumber(List list, string s) {
	for (size_t i = 0; i < list.get_count(); i++)
	{
		if (list[i]->contact.GetTelephoneNumber() == s)
		{
			cout << "\nObject found by telephone number:" << endl;
			return &list[i]->contact;
		}
	}
	cout << "Object is not found!" << endl;
	return nullptr;
}

int main() {

	List list;
	Handbook Oleg = { "Microsoft", "Jeorge", "123-321-333", "1, 2, 3", "Master" };
	Handbook Maksim = { "Apple", "Oleg", "333-122-222", "3, 2, 1", "Flomaster" };

	list.push_back(Oleg);
	list.push_back(Maksim);

	list.print();

	SaveToFile(list);

	Handbook* temp = findByCompanyName(list, "Microsoft");

	temp->Print();

	temp = findByOwner(list, "Michael");

	temp->Print();

	temp = findByTelephoneNumber(list, "333-122-222");

	temp->Print();

	temp = findByOccupation(list, "Full Stack Developer");

	temp->Print();

	return 0;
}