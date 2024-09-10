#include "BasePersonal.h"
#include <iostream>
#include <string>
using namespace std;
BasePersonal::BasePersonal(int iden,string name)
{
    this->Id = iden;
    this->Name = name;

}
 void BasePersonal::Print(void)
{
   cout<<"Id: " <<this->Id<< endl;
   cout<<"Name: "<<this->Name<<endl;
}
