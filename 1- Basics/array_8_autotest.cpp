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

void TEST_get2max() {
	const int SIZE = 10;
	int arr[SIZE];

	for(int test=0; test < 1000; ++test) {
		// Build rand array
		for(int i=0; i<SIZE; ++i)
			arr[i] = rand() % 100; // arr[i] = in range [0, 99]

		int myAnswer = get2max(arr, SIZE);

		sort(arr, arr+SIZE);
		int correctAnswer = arr[SIZE-2];

		assert(myAnswer == correctAnswer);
	}
	cout<< "PERFECT";
}

int main() {

	TEST_get2max();

	return 0;
}
