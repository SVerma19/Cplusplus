#ifndef FLYING_BIRD_H
#define FLYING_BIRD_H

#include "bird.h"
 
class FlyingBird : public Bird
{
	
public:
	FlyingBird(string name);
	void canFly();
	~FlyingBird();

};

#endif