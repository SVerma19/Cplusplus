#include <iostream>
// Include the string library
#include <string>

using namespace std;

int main() {
    // Create a string variable
    string greeting = "Hello";


    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();


    string myString = "Hello";
    cout << myString[0];
    // Outputs H

    //io

    string xfirstName;
    cout << "Type your first name: "; 
    cin >> xfirstName; // get user input from the keyboard
    cout << "Your name is: " << xfirstName << "\n";


	
	string temp = "this is a test" ;
	
	//access by char:
	cout << "char[0]: " << temp[0] << "\n";

	//find method
	cout << "find position of first 's' : " << temp.find('s') << "\n";



	

  return 0;
}