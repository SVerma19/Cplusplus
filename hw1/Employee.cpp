#include "Employee.h"
using namespace std;


Employee::Employee(string name_, int ID_, string title_, int salary_):
	name(name_), ID(ID_), title(title_), salary(salary_)
	{}

string Employee::getName() {
	return name;
}

Employee::~Employee(){
	cout << "Freeing (the memory space for ) an Employee. " << endl;	
}