#include <iostream>
using namespace std;
/**
 * !!! ØÑםÞו ÚÌםÈו Ýל ÇבבזÌם‗ ÈÊÇÚ ÇבÓל ÈבÓ ÈבÓ
 */
int main() {
	// והÇ ÈÓ ÚדבÊ ÂÑל Úבל ÇבÓÑםÚ ז ØÈÚÊוו ÚבÔÇה ÇÔÑÍ Úבםוו
	int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
	cout << "el array: ";
	for (int i = 0; i < 12; ++i)
		cout << arr[0][i] << "  ";
	cout << "\n";

	/**
	 * ÏÇ Çבבל ÇהÇ דÊÚזÏ Úבםו ז Çבבל דÊזÞÚ Çהו םÍÕב ,,,,
	 */
	cout << "------------------------------\n";
	cout << "arr[0][0]  = " << arr[0][0] << endl;		// arr[0][0]  = 1
	cout << "arr[0][1]  = " << arr[0][1] << endl;		// arr[0][0]  = 2
	cout << "arr[0][11] = " << arr[0][11] << endl;		// arr[0][0]  = 12

	/**
	 * ÏÇ Çבבל ÇהÇ דÔ דÊÚזÏ Úבםו ז Çבבל דÔ דÊזÞÚ Çהו םÍÕב ,,,,
	 */
	cout << "------------------------------\n";
	cout << "arr[1][0] = " << arr[1][0] << endl;		// arr[0][0]  = 4
	cout << "arr[2][0] = " << arr[2][0] << endl;		// arr[0][0]  = 7
	cout << "arr[3][1] = " << arr[3][1] << endl;		// arr[0][0]  = 11
	cout << "arr[0][0] = " << arr[0][0] << endl;		// arr[0][0]  = 1

//	system("PAUSE");
	return 0;
}
