#include <iostream>
using namespace std;

// -----> Google: // overloading vs inline ??
class Car
{

public:

	Car() 					{		cout << "Hello form default Constructor" << endl;	}
	Car(string sayAny) 		{		cout << sayAny << endl;								}
	Car(int a, int b) 		{		cout << a << " + " << b << " = " << a+b << endl;	}
};


// --------------------------------
int main() {

	Car defalutConst;		// will call the default constructor
	Car noConst();			// will NOT call the default constructor, because-> () is empty!
	Car StringConst("Love Love LOVE");			// will call string constructor
	Car additionConst(5, 6);			// will call string constructor
	// -----------


	return 0;
}
// --------------------------------
