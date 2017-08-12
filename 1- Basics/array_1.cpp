#include <iostream>
using namespace std;

const int ARRSIZE = 5;
/**
 * 5 ways to pass array into prototype function
 *
 * @google pass array to function declaration c++
 */

// 1st way ------
int arr1(int[]);
// 2nd way ------
int arr1(int []);
// 3rd way ------
int arr1(int arr[]);
// 4th way ------
int arr1(int arr[ARRSIZE]);
// 5th way ------
int arr1(int *arr);

int main() {

	int arr[] = {435,44,332,856,11};
	arr1(arr);

//	system("PAUSE");
	return 0;
}

int arr1(int x[]) {
	for(int i=0; i < 5; i++)
		cout << x[i] << "  ";
	return 1;
}
