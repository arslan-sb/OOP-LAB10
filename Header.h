#pragma once

#include <string>
using namespace std;
class Faculty {
protected:
	string name;
	int ID;

public:
	Faculty();
	Faculty(string n, int id);
	virtual void setData() {
		cout << "Enter Name: ";
		getline(cin, name);
		cout << "Enter ID: ";
		cin >> ID;
	}
	virtual float salary() = 0;
	virtual void print();
};
class Permanent :public Faculty {
protected:
	int years;
	int basicPay;

public:
	Permanent();
	Permanent(string n, int i, int y, int pay);
	void setData(){
		Faculty::setData();
		cout << "Enter years of service: ";
		cin >> years;
		cout << "Enter basic salary: ";
		cin >> basicPay;
	}
	float salary();
	void print();

};
class VisitingFaculty :public Faculty {
protected:
	int rate;
	int numberOfHours;

public:
	VisitingFaculty();
	VisitingFaculty(string n, int i, int y, int pay);
	void setData() {
		Faculty::setData();
		cout << "Enter per hour rate: ";
		cin >> rate;
		cout << "Enter number of hours of teaching: ";
		cin >> numberOfHours;
	}
	float salary();
	void print();
};