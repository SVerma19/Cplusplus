#include "FlyingBird.h"
 

FlyingBird::FlyingBird(string name_) : Bird(name_) {

}

void FlyingBird::canFly(){
	cout << "I am a flying bird, look at me, so pretty... " << endl;
}
 

FlyingBird::~FlyingBird(){
	cout << "freeing (the memory space for) a  flying bird. " << endl;
}