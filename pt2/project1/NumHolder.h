#include "Num.h"
#include <vector>
using namespace std;

class NumHolder {
 private:
  vector<Num> nums;
 
 public:
  NumHolder();
  ~NumHolder();
 
  void addNum(Num n);
  int getNumsCount();
  
};
