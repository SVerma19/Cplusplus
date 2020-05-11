#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include <string>
#include <iostream>
using namespace std;

class Employee {

	private:
		string name;
		int ID;
		string title;
		int salary;

	public:
		Employee(string name, int ID, string title, int salary);
		string getName();
		virtual ~Employee();
};

#endif