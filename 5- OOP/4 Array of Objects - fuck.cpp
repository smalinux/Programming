#include <iostream>
using namespace std;

class Car
{

public:
	Car() 		{		cout << "Constractor" << endl;	}
	~Car() 		{		cout << "Destractor" << endl;	}
	void anyMethod(string str) {
		cout << str << endl;
	}
};


// --------------------------------
int main() {

	Car objs[5];
	objs[1].anyMethod("LOL");


	return 0;
}
// --------------------------------
