#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	/*
	The std::vector::data() is an STL in C++ which returns a direct pointer to the memory array used 
	internally by the vector to store its owned elements.

	> Parameters: The function does not accept any parameters.
	> Return value: The function returns a pointer to the first element in the array which is used internally by the vector.
	 
	 */
	
	// initialising vector 
	vector<int> vec = { 10, 20, 30, 40, 50 }; 

	// memory pointer pointing to the 
	// first element 
	int* pos = vec.data(); 

	// prints the vector 
	cout << "The vector elements are: "; 
	for (int i = 0; i < vec.size(); ++i) 
		cout << *pos++ << " "; 

	return 0; 
} 
