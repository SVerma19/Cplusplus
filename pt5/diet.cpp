#include "diet.h"
using namespace std;

Diet::Diet(){

	meals.push_back("cake");
	meals.push_back("cookies");
	meals.push_back("lasagne");
	meals.push_back("rice and beans");
	meals.push_back("pizza");
}

void Diet::getLunch(int index){
 	cout << meals.at(index) << endl;
}
