#include <iostream>
#include "NumHolder.h"
using namespace std;

int main() {
  Num n(35);
  cout << n.getNum() << endl;
  
  Num n2(75);
  Num n3(111);
  
  NumHolder nh;
  nh.addNum(n);
  nh.addNum(n2);
  nh.addNum(n3);
  
  cout << nh.getNumsCount() << endl;
  
  return 0;
}