#ifndef BIRD_H
#define BIRD_H

#include "diet.h"
#include <string>
#include <iostream>
using namespace std;

class Bird {

	protected:
		string name;
		Diet diet;

	public:
		Bird(string name);
		virtual ~Bird();
	 	virtual void canFly();
		virtual void getLunch(int i);
		string getName();

};

#endif
