#include "nonFlyingBird.h"
 

NonFlyingBird::NonFlyingBird(string name_) : Bird(name_) {

}

void NonFlyingBird::canFly(){
	cout << "I am a non flying bird, sadly i must walk. " << endl;
}
 

NonFlyingBird::~NonFlyingBird(){
	cout << "freeing (the memory space for) a non flying bird. " << endl;
}