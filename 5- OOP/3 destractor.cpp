#include <iostream>
using namespace std;

class Car
{

public:
	 // NOTE: destructors take no parameters and return no values
	~Car() 					{		cout << "Hello form default destractor" << endl;	}
};


// --------------------------------
int main() {

	Car defalutDestract;		// will call the default constructor
	Car noDestract();			// will NOT call the default destractor, because-> () is empty!
	// -----------


	return 0;
}
// --------------------------------
