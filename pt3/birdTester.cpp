#include "nonFlyingBird.h"

int main(){
	
	Bird* b = new Bird("tweety");
	b->canFly();
	cout << b->getName() << endl;
	delete b;

	Bird* nfb = new NonFlyingBird("Strolly");
	nfb->canFly();
	cout << nfb->getName() << endl;
	
	delete nfb;

	
	return 0;
}