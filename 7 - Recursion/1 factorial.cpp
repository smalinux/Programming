//============================================================================
// Name        : HelloWorld.cpp
// Author      : smalinux
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <algorithm>
//#include <array>
//#include <cmath>
//#include <iomanip>
//#include <string>
#include <iostream>
//#include <bits/stdc++.h>

using namespace std;
// ===============================================================================================
// ===============================================================================================
// -----------------------------------------------------------------------------------------------
// ...............................................................................................

int fact(int n) {
	if(n <= 1)
		return 1;
	return n * fact(n-1);
}

int main() {
	// ----------------------------------------------------------------------


	cout << fact(4);

	// ----------------------------------------------------------------------
	return 0;
}
