#pragma once
#include <iostream>
using namespace std;

class Handbook
{
	string company_name;
	string owner;
	string tel_number;
	string adress;
	string occupation;
public:
	Handbook() = default;
	Handbook(string company_name, string owner, string tel_number, string adress, string occupation);
	
	void SetCompanyName(string company_name);
	void SetOwner(string owner);
	void SetTelephoneNumber(string tel_number);
	void SetAdress(string adress);
	void SetOccupation( string occupation);
	

	string GetCompanyName();
	string GetOwner();
	string GetTelephoneNumber();
	string GetAdress();
	string GetOccupation();

	void Input();
	void Print();
};

