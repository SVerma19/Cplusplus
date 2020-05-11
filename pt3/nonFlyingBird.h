#include "bird.h"

 
class NonFlyingBird : public Bird
{
	
public:
	NonFlyingBird(string name);
	void canFly();
	~NonFlyingBird();

};