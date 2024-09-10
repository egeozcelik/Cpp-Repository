#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;


class Employee
{
private:
    string firstName;
     string lastName;
    char initial;
    string className;
public:
    Employee(string FirstName,char initial, string lastName);
    string GetFullName(void) const;
    virtual double payWage(void) const=0;
};
#endif // EMPLOYEE_H



