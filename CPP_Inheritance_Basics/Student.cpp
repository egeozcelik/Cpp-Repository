#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
Student::Student(int iden,string name,int no,int grade):BasePersonal(iden, name)
{
    this->no = no;
    this->grade = grade;
}
void Student::GiveDetails(void)
{
    cout<<"Other Details of Student: "<<endl;
    cout<<"No: "<<this->no<<endl;
    cout<<"Grade: "<<this->grade<<endl;

}
