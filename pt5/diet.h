#ifndef DIET_H
#define DIET_H


#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Diet {

	protected:
		vector<string> meals;

	public:
		Diet();
		virtual ~Diet(){};
	 	virtual void getLunch(int i);

};

#endif
