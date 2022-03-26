#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <string>


class Calculator
{
public:
    Calculator(int num1, int num2);

    int add();

    int minus();

    int mul();

private:
    int num1_;
    int num2_;
};


#endif //CALCULATOR_HPP
