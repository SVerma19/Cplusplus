#include "cat.h"
 

Cat::Cat(string name_) : Animal(name_) {}

void Cat::makesSound() {
	cout << "Meow" << endl;
}
 
string Cat::getName() {
	return name;
}

Cat::~Cat() {
	cout << "freeing (the memory space for) a Cat. " << endl;
}