#include "mevduat.h"
#include <iostream>

using namespace std;



double mevduat ::FaizOrani = 1.2;
mevduat::mevduat(void)
{
    do
    {
        cout<< "musteri no girin:"<<endl;
        cin >> this-> MusteriNo;
    }
    while(this->MusteriNo <0);
    do
    {
        cout<<"bakiye girin:   ";
        cin >> this ->Bakiye;
    }
    while(this->Bakiye < 0);

    return;
}
int mevduat::getMusteriNo(void) const
{
    return this->MusteriNo;

}
double mevduat ::getBakiye(void) const
{
    return this->Bakiye;

}
double mevduat::getFaizOrani(void)
{
    return mevduat::FaizOrani;
}
void mevduat::setFaizOrani(double FaizOrani)
{
    if(FaizOrani>0.0)
    {
        cout<<"faiz orani,  "<< FaizOrani
        << " olarak güncellendi." << endl;
        mevduat::FaizOrani = FaizOrani;
    }
    else
    {
        cout<<"Faiz orani,  "<< FaizOrani
        << " olarak güncellenmedi."<< endl;
        cout<< " faiz orani : " << mevduat::getFaizOrani() <<endl;
    }

    return;
}

double mevduat::faizlendir(void)
{
    this->Bakiye += this->Bakiye*mevduat::getFaizOrani()/100;
    return this ->getBakiye();

}







































