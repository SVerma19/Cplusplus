#include "Employee.h"
#include <vector>
using namespace std;


class Company {
 private:
  vector<Employee> emp;
 
 public:
  Company();
  ~Company();
 
  void addEmployee(Employee e);
  int getEmployeeCount();
  
};