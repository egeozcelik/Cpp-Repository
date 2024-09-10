#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"

class HourlyEmployee:public Employee
{
private:
    double hourlyWage;

public:
    HourlyEmployee(string firstName, char initial, string lastName,double hourlyWage);
    double payWage(void) const;

};


#endif // HOURLYEMPLOYEE_H
