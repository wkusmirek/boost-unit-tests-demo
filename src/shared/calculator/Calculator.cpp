#include "Calculator.hpp"
#include <stdexcept>

Calculator::Calculator() : num1_(0), num2_(0), result_(0)
{
    // constructor
}

Calculator::Calculator(int num1, int num2) : num1_(num1), num2_(num2), result_(0)
{
    // constructor
}

int Calculator::add()
{
    return num1_ + num2_;
}

void Calculator::add(int num)
{
    result_ += num;
}

int Calculator::min()
{
    return num1_ - num2_;
}

int Calculator::mult()
{
    return num1_ * num2_;
}

int Calculator::div()
{
    if (num2_ == 0) {
        throw std::runtime_error("Division by zero!!!");
    }
    return num1_ / num2_;
}

void Calculator::resetResult()
{
    result_ = 0;
}

int Calculator::getResult()
{
    return result_;
}
