#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <string>


class Calculator
{
public:
    Calculator(int num1, int num2);

    int add();
    int min();
    int mult();
    int div();

private:
    int num1_;
    int num2_;
};


#endif //CALCULATOR_HPP
