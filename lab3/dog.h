#ifndef DOG_H
#define DOG_H

#include "animal.h"

 
class Dog : public Animal {
	
	public:
		Dog(string name);
		void makesSound();
		~Dog();
		string getName();

};


#endif