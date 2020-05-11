#include "Employee.h"
#include "Company.h"
#include <vector>

int main(){

	Employee* e1 = new Employee("Jim", 123, "Salesman", 80000);
	cout << e1->getName() << endl;

	Employee* e2 = new Employee("Dwight", 456, "Salesman", 80000);
	cout << e2->getName() << endl;

	Employee* e3 = new Employee("Pam", 789, "Receptionist", 60000);
	cout << e3->getName() << endl;
	
	cout << "-----------" << endl;
	cout << "-----------" << endl;
	
	//create a vector of Bird*
	vector<Employee*> e;
	
	//add to the vector
	e.push_back(e1);
	e.push_back(e2);
	e.push_back(e3);
	
	//iterate over the vector
	for(vector<Employee*>::iterator iter = begin(e); iter != end(e); ++iter) {
    	 //(*iter)->canFly();
	}
	
	//release memory
	delete e1;
	delete e2;
	delete e3;
	
	return 0;
}