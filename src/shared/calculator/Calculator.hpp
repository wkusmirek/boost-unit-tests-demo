#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator
{
public:
    Calculator();
    Calculator(int num1, int num2);

    int add();
    void add(int num);
    int min();
    int mult();
    int div();

    void resetResult();
    int getResult();

private:
    int num1_;
    int num2_;
    int result_;
};


#endif //CALCULATOR_HPP
