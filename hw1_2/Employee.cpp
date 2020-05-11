#include "Employee.h"


Employee::Employee() : 
name(""), ID(0), title(""), salary(0){

}



Employee::Employee(string thisName, int thisID, string thisTitle, int thisSalary):
name(thisName), ID(thisID), title(thisTitle), salary(thisSalary)
{

}




string Employee::getName()
{
    return name;
}

int Employee::getID()
{
    return ID;
}
string Employee::geTitle()
{
    return title;
}
int Employee::getSalary()
{
    return salary;
}

