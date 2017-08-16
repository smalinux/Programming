#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int get2max(int arr[], int size) {
	assert(size >= 2);

	int iFstMax = arr[0],		// First Max Num
				iSndMax = arr[1];	// Second Max Num

	if(iSndMax > iFstMax) {
		int i = iFstMax;
		iFstMax = iSndMax;
		iSndMax = i;
	}

	for(int i=2; i < size; i++) {
		if( arr[i] > iFstMax ) {
			iSndMax = iFstMax;
			iFstMax = arr[i];
		} else if ( arr[i] < iFstMax && arr[i] > iSndMax) {
			iSndMax = arr[i];
		}
	}
	return iSndMax;
}

int main() {
	const int AS = 5;
	int arr[AS] = {6,2,30,4,5};

	cout<< "Second Nax Num: " << get2max(arr, AS);

	return 0;
}
