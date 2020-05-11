#ifndef DRAGON_H
#define DRAGON_H

#include "animal.h"

 
class Dragon : public Animal {
	
	public:
		Dragon(string name);
		~Dragon();
		string getName();

};


#endif