#include <iostream>
#include <algorithm>

using namespace std;

void reverse_inplace(int arr[], int size) {
	for(int x=0; x < size/2; ++x ) {
		swap(arr[x],arr[size-x-1]);
	}
}
int main() {

	const int SIZE = 6;
	int arr[SIZE] = {0,1,2,3,4,5};
	for(int i=0; i<SIZE; i++)
		cout<< arr[i];
	cout << endl;
	reverse_inplace(arr, SIZE);

	for(int i=0; i<SIZE; i++)
		cout<< arr[i];
	cout << endl;

	return 0;
}
