/**
 * Given array of distinct number, find the second maximum number.
 */
#include <iostream>
using namespace std;

int main() {
	const int AS = 5;
	int arr[AS] = {6,2,30,4,5};

	int iFstMax = arr[0],		// First Max Num
			iSndMax = arr[1];	// Second Max Num

	if(iSndMax > iFstMax) {
		int i = iFstMax;
		iFstMax = iSndMax;
		iSndMax = i;
	}

	for(int i=2; i < AS; i++) {
		if( arr[i] > iFstMax ) {
			iSndMax = iFstMax;
			iFstMax = arr[i];
		} else if ( arr[i] < iFstMax && arr[i] > iSndMax) {
			iSndMax = arr[i];
		}
	}

	cout<< "First Max Num: " << iFstMax <<"\nSecond Max Num: " << iSndMax;

	return 0;
}
