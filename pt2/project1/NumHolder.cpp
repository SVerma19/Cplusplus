#include "NumHolder.h"

NumHolder::NumHolder() { 
}


void NumHolder::addNum(Num n)
{
    nums.push_back(n); 
}

int NumHolder::getNumsCount(){
	return nums.size();
}

NumHolder::~NumHolder(){}