#include <iostream>
#include "Employee.h"
#include "SalaryEmployee.h"
#include "HourlyEmployee.h"
using namespace std;

int main(void)
{
    SalaryEmployee s("Sfn", 'S', "Sin",10000.0);
    HourlyEmployee h("Hfn", 'H', "Hln", 40.0);


    Employee* Employees[]={&s, &h};
    double monthlySalaries[] = {0.0,0.0};
    double annualSalaries[] = {0.0,0.0};

    for(int m=0;m<12;m++)
    {
        cout<<"Mont: "<<m+1<<endl;
        for(int e=0; e<2 ;e++)
        {
            monthlySalaries[e] = Employees[e]->payWage();
        }
        cout<<endl;
        cout<<"Month("<<m+1<<") Salary Report"<<endl;

        for(int e=0; e<2;e++)
        {
            cout<<Employees[e]->GetFullName()<<"\t\t$"<< monthlySalaries[e]<<endl;
        }
        cout<<endl;
        for(int e=0;e<2;e++)
        {
            annualSalaries[e] += monthlySalaries[e];
        }
    }
    cout<<"Annual Payment Report"<<endl;
    for(int e=0;e<2;e++)
    {

        cout<<Employees[e]->GetFullName()<<"\t\t$"<<annualSalaries[e]<<endl;
    }
    return 0;
}
