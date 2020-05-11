#include "IceCream.h"
using namespace std;


IceCream::IceCream(string flavor_, int scoops_):
	flavor(flavor_), scoops(scoops_) 
	{}

void IceCream::addToppings(string t) {

}

string IceCream::getFlavor() {
	return flavor;
}

int IceCream::getScoops() {
	return scoops;
}

IceCream::~IceCream() {
	cout << "Freeing (the memory space for) some ice cream. " << endl;	
}