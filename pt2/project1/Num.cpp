#include "Num.h"
//default ctor w/initialization list
Num::Num() : num(0) { 

}

//1 param ctor w/initialization list
Num::Num(int n): num(n) {

}

int Num::getNum()
{
    return num; 
}
