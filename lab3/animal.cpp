#include "animal.h"
using namespace std;


Animal::Animal(string name_) : name(name_) {}

void Animal::makesSound() {
	cout << "ROAR!" << endl;
}

string Animal::getName() {
	return name;
}

Animal::~Animal() {
	cout << "Freeing (the memory space for ) an Animal. " << endl;	
}
