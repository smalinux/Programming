#include <bits/stdc++.h>
using namespace std;

int main() {
	// ----------------------------------------------------------------------

	int x = 1;
	int&y = x;

	x = 3;
	cout << y << "\n";		// y = x = 3

	y = 5;
	cout << x << "\n";		// x = y = 5

	// ----------------------------------------------------------------------
	return 0;
}