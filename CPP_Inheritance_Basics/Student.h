#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "BasePersonal.h"
using namespace std;
class Student:public BasePersonal
{
private:
    int no;
    int grade;
public:
    Student(int iden,string name,int no,int grade);
    void GiveDetails(void);

};
#endif // STUDENT_H
