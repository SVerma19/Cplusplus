#include "dragon.h"
 

Dragon::Dragon(string name_) : Animal(name_) {}
 
string Dragon::getName() {
	return name;
}

Dragon::~Dragon() {
	cout << "freeing (the memory space for) a Dragon. " << endl;
}