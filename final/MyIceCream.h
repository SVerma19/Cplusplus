#ifndef MYICECREAM_H
#define MYICECREAM_H

#include "IceCream.h"

 
class MyIceCream : public IceCream {
	
	protected:
		string flavor;
		int scoops;
		string topping;
		
	public:
		MyIceCream(string flavor);
		virtual ~MyIceCream();
		virtual void addToppings(string t);
		virtual void setScoops();
		string getFlavor();
		int getScoops();

};


#endif