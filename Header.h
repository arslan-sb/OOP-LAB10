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