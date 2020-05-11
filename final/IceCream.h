#ifndef ICECREAM_H
#define ICECREAM_H

#include <string>
#include <iostream>
using namespace std;


class IceCream {

	protected:
		string flavor;
		int scoops;
		string topping;
		
	public:
		IceCream(string flavor, int scoops);
		virtual void addToppings(string t);
		virtual ~IceCream();
		string getFlavor();
		int getScoops();

};


#endif