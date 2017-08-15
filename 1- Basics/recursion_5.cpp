#include <iostream>
using namespace std;


void TriangleRev(int x) {
   if (x <= 0) return;

   for (int i = 1; i <= x; i++)
	   cout << "*";

	cout << endl;

	TriangleRev(x - 1);
}

int main() {
	TriangleRev(5);
	return 0;
}
