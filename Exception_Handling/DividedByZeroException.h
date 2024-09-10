#ifndef DIVIDEDBYZEROEXCEPTION
#define DIVIDEDBYZEROEXCEPTION

#include <stdexcept>

using std::runtime_error;

class DivideByZeroException : public runtime_error
{
private:

public:
    DivideByZeroException::DivideByZeroException()
        : runtime_error("attempted to divide by zero") {}

};
#endif // DIVIDEDBYZEROEXCEPTION
