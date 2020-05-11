#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include <vector>

class Company : public Employee {
	
	public:
		void addEmployee(Employee e);
		int getEmployeeCount();
		virtual ~Company();
};

#endif