/**
 * Rrading & Writing strings ,,,,
 */
#include <iostream>
using namespace std;

int main() {
	string anyWord;
	string line;
	cin>> anyWord;		// וÊÞÑÃ ‗בדו זÇÍÏו ז וÊÞÝ ÚהÏ Çזב דÓÇÝו
	cout<< anyWord << endl;

	getline(cin, line );	// Read the enter
	getline(cin, line );
	cout<<"Line 1 data: " << line << "\n\n";
	getline(cin, line );
	cout<<"Line 2 data: " << line << "\n\n";

	return 0;
}
