#ifndef NON_FLYING_BIRD_H
#define NON_FLYING_BIRD_H

#include "bird.h"

 
class NonFlyingBird : public Bird
{
	
public:
	NonFlyingBird(string name);
	void canFly();
	~NonFlyingBird();

};

#endif