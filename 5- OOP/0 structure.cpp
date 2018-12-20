#include <iostream>
using namespace std;

// class declaration section
class Car
{
// data declarations
private:
	int privateName;
	int month2;

// function prototypes
public:
	Car() {
		privateName = 1994;
		cout <<"Constractor";
	}
	void hello();
	void hello2() {
		cout << "From hello2()";
	};

	int stter_privateName(int x) {
		privateName = x;
		return privateName;
	}

	int getter_privateName() {
		return privateName;
	}
};

// method implementation
void Car::hello(){
	cout << "From hello()";
}

// --------------------------------
int main() {

	Car c;
	cout << endl;	// ----------
	c.hello();
	cout << endl;	// ----------
	c.hello2();
	// -----------
	cout << endl;
	cout << c.getter_privateName() << endl;
	cout << c.stter_privateName(5555) << endl;
	cout << c.getter_privateName() << endl;
	// -----------


	return 0;
}
// --------------------------------