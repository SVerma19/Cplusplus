#include "Employee.h"
using namespace std;


Employee::addEmployee(string name_, int ID_, string title_, int salary_):
	name(name_), ID(ID_), title(title_), salary(salary_)
	{}

int Employee::getEmployeeCount() {

}

Employee::~Employee(){
	cout << "Freeing (the memory space for ) an Employee. " << endl;	
}