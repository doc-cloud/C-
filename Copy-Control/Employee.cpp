#include "Employee.h"

int Employee::s_increment = 0;

Employee::Employee()
{
 id_ = s_increment++;
}

Employee::Employee(const string & name)
{
 id_ = s_increment++;
 name_ = name;
}

int
main()
{
}
