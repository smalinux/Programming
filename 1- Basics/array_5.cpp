/**
 * *************************************
 * Row-major Order && Column-major Order
 * *************************************
 */
#include <iostream>
using namespace std;

int main() {

	const int ROW = 3, COL = 4;
	int arr[ROW][COL] = {
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
	};

	cout<< "\nRow-major Order:\n";
	for(int x=0; x<ROW; ++x) {
		for(int y=0; y<COL; ++y) {
			cout<< arr[x][y] << "\t";
		}
		cout << "\n";
	}

	cout<< "\nColumn-major Order:\n";
	for(int y=0; y<COL; ++y) {
		for(int x=0; x<ROW; ++x) {
			cout<< arr[x][y] << "\t";
		}
		cout << "\n";
	}

	return 0;
}
