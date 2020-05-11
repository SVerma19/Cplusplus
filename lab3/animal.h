#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;


class Animal {

	protected:
		string name;
		
	public:
		Animal(string name);
		virtual ~Animal();
		virtual void makesSound();
		string getName();

};


#endif