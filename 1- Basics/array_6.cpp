/**
 * Declaration el array
 */
#include <iostream>
using namespace std;

int main() {

	int IDs1[5] = {1,2,3,4,5};
	int IDs2[5] = {1,2,3,4};
	int IDs3[5];
	int IDs4[5] = {0};
	int IDs5[ ] = {1,2,3,4,5};

	// Char array: special case
	char name1[4] = {'A', 'l', 'i'};
	char name2[4] = "Ali";
	char name3[4] = {
			'A',
			'l',
			'i'
	};
	cout << "Hello Wo\0rld" << endl;
	char cChar;
	cin>>cChar;
	cout<<cChar << endl;
	char aChar[4];
	cin>>aChar;
	cout<<aChar << endl;


	return 0;
}
