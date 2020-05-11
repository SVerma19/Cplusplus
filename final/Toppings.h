#ifndef TOPPINGS_H
#define TOPPINGS_H

#include "IceCream.h"

 
class Toppings : public IceCream {
	
	protected:
		string topping;
		
	public:
		Toppings(string topping);
		virtual ~Toppings();
		string getToppings();

};


#endif