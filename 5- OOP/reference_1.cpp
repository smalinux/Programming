#include <bits/stdc++.h>

using namespace std;

int x;

int& fun() {
	return x;
}

int main() {
	// ----------------------------------------------------------------------

	cout << fun();

	// ----------------------------------------------------------------------
	return 0;
}
