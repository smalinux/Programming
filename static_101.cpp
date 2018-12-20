#include <bits/stdc++.h>
using namespace std;

void fun() {
	static int x = 0;		// static var
	int y = 0;				// normal var

	++x;
	++y;

	cout << x << "\t" << y << "\n";
}

int main() {
	// ----------------------------------------------------------------------

	//>> x is shared between all fun() ....
	fun();		// x = 1 , y = 1
	fun();		// x = 2 , y = 1

	// ----------------------------------------------------------------------
	return 0;
}