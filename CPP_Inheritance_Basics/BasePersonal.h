#ifndef BASEPERSONAL_H
#define BASEPERSONAL_H
#include <string>
using namespace std;
class BasePersonal
{
private:
    int Id;
    string Name;


public:
    BasePersonal(int id,string name);
    void Print(void);
};
#endif // BASEPERSONAL_H




