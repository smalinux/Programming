#include <iostream>
using namespace std;

int a1(int n) { return n; }

int a2(int n) { return n * a1(n-1); }

int a3(int n) { return n * a2(n-1); }

int a4(int n){ return n * a3(n-1); }

int main() {
	cout << a4(4);
	return 0;
}
