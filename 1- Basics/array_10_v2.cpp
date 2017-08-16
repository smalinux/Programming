#include <iostream>
using namespace std;

const int ROW = 3, COL = 3;

void sum_matrix(int arr1[ROW][COL], int arr2[ROW][COL], int sumArr[ROW][COL]) {
	for(int i=0; i<ROW; i++)
		for(int j=0; j<COL; j++)
			sumArr[i][j] = arr1[i][j] + arr2[i][j];
}

int main() {

	int arr1[ROW][COL] = {0,1,2,3,4,5,6,7,8};
	int arr2[ROW][COL] = {0,1,2,3,4,5,6,7,8};
	int sumArr[ROW][COL];

	sum_matrix(arr1, arr2, sumArr);

	// Print
	for(int i=0; i<ROW; i++)
		for(int j=0; j<COL; j++)
			cout<< sumArr[i][j] << "\t";

	return 0;
}
