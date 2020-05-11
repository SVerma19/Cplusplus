#include <iostream>

// Include the vector library
#include <vector>

//ref
//http://www.cplusplus.com/reference/vector/vector/?kw=vector
using namespace std;

int main() {

	//create a vector of ints
	vector<int> v;


	//add elements 
	v.push_back(2);
	v.push_back(5);
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	
	
	//get the 1st element:
	cout << v.front() << "\n";
	
	//get the last element:
	cout << v.back() << "\n";
	
	//get the count:
	cout << v.size() << "\n";
	
	
	//loop over a vector
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	
	//remove the last element:
	
	v.pop_back();

	 
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	//remove element by position
	
	v.erase(0);

	 
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

}