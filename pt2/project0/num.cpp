#include "Num.h"
//default ctor w/initialization list
Num::Num() : num(0) { 
 //this.num = 0; 
}

//1 param ctor w/initialization list
Num::Num(int n, int n2, int n3): num(n), num2(n2), num3(n3) {
 //this.num = n;
}


int Num::getNum()
{
    return num; 
}

Num::~Num(){}