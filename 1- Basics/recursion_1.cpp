/**
 *
 */
#include <iostream>
using namespace std;

void SayIamTopCoder(int cnt)
{
    if(cnt < 1)						// Base Case
		return;

    cout<<"I am  TopCoder.\n";		// Some logic

    SayIamTopCoder(cnt - 1);		// Sub-problem - never go to infinity
}

int main() {
	SayIamTopCoder(3);
	return 0;
}
