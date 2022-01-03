// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
void ignoreLine()
{
	cin.clear();
	cin.ignore();
}

int main() {

	Faculty* f[2];
	
	for (int i = 0; i < 2; i++)
	{
		int choice;
		cout << "Enter\n1 for Permanant Faculty\n2 for Visiting Faculty" << endl;
		
		bool checkCase = false;
		do
		{
			cin >> choice;
			while (cin.fail()) {
				ignoreLine();
				cout << "please enter a integer" << endl;
				cin >> choice;
			}

			switch (choice)
			{
			case 1:
				f[i] = new Permanent;
				checkCase = true;
				break;
			case 2:
				f[i] = new VisitingFaculty;
				checkCase = true;
				break;
			default:
				cout << "Invalid Input!!" << endl;
				break;
			}
		} while (checkCase == false);
	}
	for (int i = 0; i < 2; i++)
	{
		f[i]->setData();
		cout << "Salary of faculty is: " << f[i]->salary() << endl;
	}

	system("pause");
	return 0;
}
//Faculty class definition 
Faculty::Faculty() :name(), ID(0) {}
void Faculty::setData() {
	cout << "Enter Name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter ID: ";
	cin >> ID;
}
Faculty::Faculty(string n, int id) :name(n), ID(id) {}
 void Faculty::print() {
	cout << "Name: " << name << "\nID" << ID << endl;
}
 //Permanent class Definition 
 Permanent::Permanent() :Faculty(), years(0), basicPay(0) {}
 Permanent::Permanent(string n, int i, int y, int pay) :Faculty(n, i), years(y), basicPay(pay) {}
 float Permanent::salary() {
	 float result;
	 result = basicPay + 0.10 * basicPay + 0.25 * basicPay;
	 return result;
 }
 void Permanent::setData() {
	 cout << "Enter data for Permanent faculty" << endl;
	 Faculty::setData();
	 cout << "Enter years of service: ";
	 cin >> years;
	 cout << "Enter basic salary: ";
	 cin >> basicPay;
 }
 void Permanent::print() {
	 Faculty::print();
	 cout << "Years of service: " << years << endl;
	 cout << "Basic Pay: " << basicPay << endl;
 }

 //Visition faculty class function definitions
 VisitingFaculty::VisitingFaculty() :Faculty(), rate(0), numberOfHours(0) {}
 VisitingFaculty::VisitingFaculty(string n, int i, int y, int pay) :Faculty(n, i), rate(y), numberOfHours(pay) {}

 float VisitingFaculty::salary() {
	 float result;
	 result = rate * numberOfHours;
	 return result;
 }
 void VisitingFaculty::setData() {
	 cout << "Enter data for Visiting faculty" << endl;
	 Faculty::setData();
	 cout << "Enter per hour rate: ";
	 cin >> rate;
	 cout << "Enter number of hours of teaching: ";
	 cin >> numberOfHours;
 }
 void VisitingFaculty::print() {
	 Faculty::print();
	 cout << "Rate " << rate << endl;
	 cout << "Number of hours: " << numberOfHours << endl;
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
