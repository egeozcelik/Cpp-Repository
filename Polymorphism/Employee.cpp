#include "Employee.h"
#include <iostream>
using namespace std;
#include <cctype>


Employee::Employee(string firstName, char initial, string lastName)
{
    this->firstName = firstName;
    initial = toupper(initial);
    if('A'<= initial && initial<= 'Z')
    {
        this->initial = initial;
    }
    else
    {
        this->initial = 0;
    }
    this->lastName = lastName;
}
 string Employee::GetFullName(void) const
 {
     string fullName = "";
     fullName+= this->firstName;
     if(this->initial != 0)
     {
         fullName += "";
         fullName += this->initial;
         fullName += ".";

     }
     else
     {
            fullName+="";
     }
     fullName += this->lastName;
    return fullName;
 }
