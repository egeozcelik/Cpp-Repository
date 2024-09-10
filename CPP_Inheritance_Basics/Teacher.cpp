#include "Student.h"
#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;
Teacher::Teacher(int iden,string name,string branch):BasePersonal(iden, name)
{
    this->Branch = branch;

}
void Teacher::GiveDetails(void)
{
    cout<<"Other Details of Teacher: "<<endl;
    cout<<"Branch: "<<this->Branch<<endl;


}

