#include <iostream>
#include "Teacher.h"
#include "Student.h"

using namespace std;

int main()
{
    Teacher teacher1(1,"ahmet toprak","math");
    teacher1.Print();
    teacher1.GiveDetails();
    Student student1(2,"veli tas",123,7);
    student1.Print();
    student1.GiveDetails();
}



