#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include "BasePersonal.h"
using namespace std;
class Teacher:public BasePersonal
{
private:
    string Branch;

public:
    Teacher(int iden,string name,string branch);
    void GiveDetails(void);

};

#endif // TEACHER_H
