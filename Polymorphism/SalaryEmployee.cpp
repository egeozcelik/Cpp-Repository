#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee(string firstName, char initial, string lastName, double monthlySalary):
    Employee(firstName,initial,lastName)
{
    this->monthlySalary= monthlySalary;

}
double SalaryEmployee::payWage(void) const
{
    return this->monthlySalary;
}

