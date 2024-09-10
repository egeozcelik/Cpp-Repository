#ifndef MEVDUAT_H
#define MEVDUAT_H



class mevduat
{
private:
    int MusteriNo;
    double Bakiye;
    static double FaizOrani;
public :
    mevduat(void);
    int getMusteriNo(void) const;
    double getBakiye(void) const;
    static double getFaizOrani(void);
    static void setFaizOrani(double fo);
    double faizlendir(void);




};
#endif // MEVDUAT_H
