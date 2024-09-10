#ifndef VECTOR_H
#define VECTOR_H
#define PI 3.1415

class vector
{
private:
    double x;
    double y;
    double z;
public:
    vector(double xinit =1,double yinit=1, double zinit=1);
    double getx(void) const;
    double gety(void) const;
    double getz(void) const;
    vector& setx(double xval);
    vector& sety(double yval);
    vector& setz(double zval);
    double magnitude(void) const;
    double azimuth(void) const;
    double elevation(void) const;

};


#endif // VECTOR_H
