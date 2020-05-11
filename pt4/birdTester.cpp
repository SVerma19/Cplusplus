#include "nonFlyingBird.h"
#include "FlyingBird.h"
#include <vector>

int main(){
	
	Bird* b = new Bird("tweety");
	b->canFly();
	cout << b->getName() << endl;

	Bird* nfb = new NonFlyingBird("Strolly");
	nfb->canFly();
	cout << nfb->getName() << endl;
	
	Bird* fb = new FlyingBird("floaty");
	fb->canFly();
	cout << fb->getName() << endl;
	
	cout << "-----------" << endl;
	cout << "-----------" << endl;
	
	//create a vector of Bird*
	vector<Bird*> v;
	
	//add to the vector
	v.push_back(b);
	v.push_back(nfb);
	v.push_back(fb);
	
	//iterate over the vector
	for(vector<Bird*>::iterator it = begin(v); it != end(v); ++it) {
    	 (*it)->canFly();
	}
	
	
	//release memory
	delete b;
	delete nfb;
	delete fb;
	
	
	return 0;
}