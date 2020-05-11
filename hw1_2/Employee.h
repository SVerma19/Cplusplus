#include <iostream>
#include <string>
using namespace std;


class Employee {
 private:
  string name;
  int ID;
  string title;
  int salary;


 public:
  Employee();
  Employee(string thisName, int thisID, string thisTitle, int thisSalary);
  std::string getName();
  int getID();
  std::string geTitle();
  int getSalary();

};
