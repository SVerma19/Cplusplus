#include "MyIceCream.h"
 

MyIceCream::MyIceCream(string flavor_) : IceCream(flavor_) {}

void MyIceCream::addToppings(string t) {
    this->topping = t;
}

string MyIceCream::getFlavor() {
	return flavor;
}

int MyIceCream::getScoops() {
	return scoops;
}

MyIceCream::~MyIceCream() {
	cout << "Freeing (the memory space for) my ice cream. " << endl;	
}