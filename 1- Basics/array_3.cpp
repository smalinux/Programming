#include <iostream>
using namespace std;

int main() {

	int tdArray[][] = {		// Compilation Error: must to declare el bounds for all dimensions of el array
			{1,2,3,10},
			{4,5,6,11},
			{7,8,9,12}
	};

	cout << tdArray[1][1];
	cout << tdArray[2][3];

//	system("PAUSE");
	return 0;
}
