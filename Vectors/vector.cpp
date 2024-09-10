#include "vector.h"
#include <iostream>
#include <cmath>

vector::vector(double xinit,double yinit, double zinit)
{
    this->setx(xinit);
    this->sety(yinit);
    this->setz(zinit);
}
double vector::getx(void) const
{
    return this->x;
}
double vector::gety(void) const
{
    return this->y;
}
double vector::getz(void) const
{
    return this->z;
}
vector& vector::setx(double xval)
{
    this->x = xval;
    return *this;
}
vector& vector::sety(double yval)
{
    this->y = yval;
    return *this;
}
vector& vector::setz(double zval)
{
    this->z = zval;
    return *this;
}
double vector::magnitude(void) const
{
    //kareler toplamýnýn karekökü
    return sqrt( pow(this->getx(),2.0)+
                 pow(this->gety(), 2.0)+
                 pow(this->getz(), 2.0)
               );
}
double vector::azimuth(void) const
{
     return atan2(this->gety(),this->getx())/PI*180;
}
double vector::elevation(void) const
{
    double magxy = sqrt(pow(this->getx(), 2.0)+
                       pow(this->gety(), 2.0) );
    return atan2(this->getz(),magxy)/PI*180;
}

























