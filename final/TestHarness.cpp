#include "IceCream.h"
#include "MyIceCream.h"
#include "Toppings.h"
#include <vector>

int main() {
	
	MyIceCream* ice = new MyIceCream("vanilla", 3);
	ice->addToppings("fudge");
	ice->addToppings("oreos");
	ice->addToppings("cherry");
	cout << ice->getFlavor() << endl;
	cout << ice->getScoops() << endl;
	// cout << ice->getToppings() << endl;

	cout << "***********" << endl;
	cout << "***********" << endl;
	
	// create a vector
	vector<IceCream*> i;
	
	// add to the vector
	i.push_back(ice);
	
	// iterate over the vector
	for (vector<IceCream*>::iterator iter = begin(i); iter != end(i); ++iter) {
    	// (*iter)->;
	}
	
	// release memory
	delete ice;
	
	return 0;
	
}