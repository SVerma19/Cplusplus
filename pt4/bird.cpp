#include "bird.h"
using namespace std;


Bird::Bird(string name_) : name(name_) {}

void Bird::canFly(){
	cout << "I am a bird, therefore i can fly. " << endl;
}

string Bird::getName(){
	return name;
}

Bird::~Bird(){
	cout << "Freeing (the memory space for ) a Bird. " << endl;	
}