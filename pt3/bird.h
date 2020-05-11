#include <string>
#include <iostream>
using namespace std;

class Bird {

	protected:
		string name;
	
	public:
		Bird(string name);
		virtual ~Bird();
	 	virtual void canFly();
		string getName();

};