//============================================================================
// Name        : test.cpp
// Author      : smalinux
// local	   : D:\__CPP\eclipseWorkspace\generalTest-forLearningCPP\src
// Description :
//	Simplest example for returning by reference!
// ﬂœ« «‰« »”ÂÊ·Â ⁄„·  return „‰ €Ì— „« «⁄„· ›⁄·Ì« return! :D
//============================================================================

#include <iostream>
using namespace std;

void changeSomeInts(int &x, int &y);

int main() {
	// -------------------------------------------------------------------

	int a = 1, b = 2;
	changeSomeInts(a, b);
	cout << "a= " <<a << ", b= " <<b << endl;

	// -------------------------------------------------------------------
	return 0;
}

void changeSomeInts(int &x, int &y) {
	x = 6;
	y = 3;
}
