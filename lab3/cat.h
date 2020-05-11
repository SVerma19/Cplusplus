#ifndef CAT_H
#define CAT_H

#include "animal.h"

 
class Cat : public Animal {
	
	public:
		Cat(string name);
		void makesSound();
		~Cat();
		string getName();

};


#endif