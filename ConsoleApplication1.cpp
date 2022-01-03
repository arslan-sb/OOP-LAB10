// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;
class Faculty {
protected:
	string name;
	int ID;

public:
	Faculty() :name(), ID(0) {}
	Faculty(string n, int id) :name(n), ID(id) {}
	virtual float salary() = 0;
	virtual void print() {
		cout << "Name: " << name << "\nID" << ID << endl;

	}
};
class Permanent :public Faculty {
protected:
	int years;
	int basicPay;

public:
	Permanent() :Faculty(), years(0), basicPay(0) {}
	Permanent(string n, int i, int y, int pay) :Faculty(n, i), years(y), basicPay(pay) {}
	float salary() {
		float result;
		result = basicPay + 0.10 * basicPay + 0.25 * basicPay;
		return result;
	}
	void print() {
		Faculty::print();
		cout << "Years of service: " << years << endl;
		cout << "Basic Pay: " << basicPay << endl;
	}

};
class VisitingFaculty :public Faculty {
protected:
	int rate;
	int numberOfHours;

public:
	VisitingFaculty() :Faculty(), rate(0), numberOfHours(0) {}
	VisitingFaculty(string n, int i, int y, int pay) :Faculty(n, i), rate(y), numberOfHours(pay) {}

	float salary() {
		float result;
		result = rate * numberOfHours;
		return result;
	}
	void print() {
		Faculty::print();
		cout << "Rate " << rate << endl;
		cout << "Number of hours: " << numberOfHours << endl;
	}
};
int main() {

	Permanent p("Arslan", 53, 5, 50000);
	VisitingFaculty v("Urooj", 97, 10000, 30);
	Faculty* f;
	f = &p;
	f->print();
	cout << "Salary: " << f->salary() << endl;

	f = &v;
	f->print();
	cout << "Salary: " << f->salary() << endl;

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
