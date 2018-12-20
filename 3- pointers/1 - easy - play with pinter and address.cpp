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
#include <iostream>
#include <string>

using namespace std;

void insert(string *Pname, int &Rage) {
	cout << *Pname << "\t" << Rage;
}

int main() {
	// ----------------------------------------------------------------------

	string name;
	int age;
	cin >> name >> age;
	insert(&name, age);

	// ----------------------------------------------------------------------
	return 0;
}