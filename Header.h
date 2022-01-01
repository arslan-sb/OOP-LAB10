#pragma once
class A {
private:
	int x;
	int y;
public:
	A() :x(0), y(0) {}

	void diplay() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
};
class B :public A {
private: 
	int z;
public:
	B() :A(), z(0) {}
};