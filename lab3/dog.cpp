#include "dog.h"
 

Dog::Dog(string name_) : Animal(name_) {}

void Dog::makesSound() {
	cout << "BARK!" << endl;
}
 
string Dog::getName() {
	return name;
}

Dog::~Dog() {
	cout << "freeing (the memory space for) a Dog. " << endl;
}
