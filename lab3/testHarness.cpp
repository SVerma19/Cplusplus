#include "animal.h"
#include "cat.h"
#include "dog.h"
#include "dragon.h"
#include <vector>

int main() {
	
	Cat* cat = new Cat("Snowball");
	cat->makesSound();
	cout << cat->getName() << endl;

	Dog* dog = new Dog("Marmaduke");
	dog->makesSound();
	cout << dog->getName() << endl;
	
	Dragon* dragon = new Dragon("Drago");
	dragon->makesSound();
	cout << dragon->getName() << endl;
	
	cout << "***********" << endl;
	cout << "***********" << endl;
	
	// create a vector of each animal
	vector<Animal*> a;
	
	// add to the vector
	a.push_back(cat);
	a.push_back(dog);
	a.push_back(dragon);
	
	// iterate over the vector
	for (vector<Animal*>::iterator iter = begin(a); iter != end(a); ++iter) {
    	(*iter)->makesSound();
	}
	
	// release memory
	delete cat;
	delete dog;
	delete dragon;
	
	return 0;
	
}