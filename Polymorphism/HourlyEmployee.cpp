#include "HourlyEmployee.h"
#include <iostream>
using namespace std;
HourlyEmployee::HourlyEmployee(string firstName, char initial, string lastName, double hourlyWage):Employee(firstName, initial, lastName)
{
    this->hourlyWage = hourlyWage;
}
double HourlyEmployee::payWage(void) const
{
    int hoursWorked;
    do
    {
        cout<<"How many hours did"<<this->GetFullName()<<"worked?";
        cin>>hoursWorked;
    }while(!(0<= hoursWorked&&hoursWorked < 20*8));

    return hoursWorked*this->hourlyWage;
}
