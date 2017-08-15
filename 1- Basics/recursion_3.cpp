#include <iostream>
using namespace std;

int Fact(int n)
{
	if(n <= 1)
		return 1;

	return n * Fact(n-1);
}

int main() {

	cout<< Fact(8);

	return 0;
}
