#include <iostream>
#include "DividedByZeroException.h"
using namespace std;

double quotient(int numerator, int denominator)
{
    if(denominator == 0)
        throw DivideByZeroException();

    return static_cast<double>(numerator) / denominator;
}

int main()
{
    int number1;
    int number2;
    double result;

    cout<< "Enter two integers(end-of-file to end): ";
    while(cin>> number1 >> number2)
    {
        try
        {
            if(number2==0)
                throw number2;
            result = quotient(number1,number2);
            cout<< "The quotient is: "<<result<<endl;
        }
        catch(int ex)
        {
            cout << "Exception occured: "
                 << DivideByZeroException.what() << endl;
        }

        cout << "\nEnter two integers (end-of-file to end): ";
    }
    return 0;
}
