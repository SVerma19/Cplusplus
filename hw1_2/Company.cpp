#include "Company.h"



Company::Company(){

}

void Company::addEmployee(Employee e)
{
    emp.push_back(e);
}

int Company::getEmployeeCount(){
    cout<<"The number of employees is: ";
    return emp.size();
}

Company::~Company(){}

