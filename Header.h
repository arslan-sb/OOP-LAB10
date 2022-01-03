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

	float salary();
	void print();
};