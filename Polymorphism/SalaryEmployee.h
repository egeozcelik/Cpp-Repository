#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
#include "Employee.h"


class SalaryEmployee :public Employee
{
private:
    double monthlySalary;

public:
    SalaryEmployee(string firstName, char initial, string lastName, double monthlySalary);
    double payWage(void) const;
};
#endif // SALARYEMPLOYEE_H





