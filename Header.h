#pragma once
#include <iostream>
using namespace std;
class A {
protected:
	int x;
	int y;
public:
	//A() :x(0), y(0) {}

	virtual  void diplay() = 0;

};
class B :public A {
private: 
	int z;
public:
	//B() :A(), z(0) {}
	void diplay() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
};
class C: public A {
private :
	float d;
public:
	//C() :A(), d(0) {}
	void diplay() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "d: " << d << endl;

	}
};






