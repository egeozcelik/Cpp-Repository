#include "mevduat.h"
#include <iostream>
using namespace std;

//#define UYGULAMA1
#define UYGULAMA2


#ifdef UYGULAMA1
 /* UYGULAMA 1 */

 int main(void)
 {
     mevduat ::setFaizOrani(1.15);
    cout<<"Faiz Orani:  " << mevduat::getFaizOrani() << endl;

     return 0;
 }

 #endif

 #ifdef UYGULAMA2


 int main(void)
 {
     mevduat Musteriler[2];
     int m,i;
     for(i=0; i<3; i++)
     {
         for(m=0;m<2;m++)
         {
             cout<<Musteriler[m].getMusteriNo() << "no'lu musterinin "
             << i+1 <<". donem sonu bakiyesi: "<<Musteriler[m].faizlendir();
             cout<<endl;
         }

         cout<<endl;

     }

 }
 #endif // UYGULAMA2
