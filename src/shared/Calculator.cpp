#include "Calculator.hpp"

Calculator::Calculator(std::string s) : bar_(s)
{
    // constructor
}

std::string Calculator::get()
{
    return bar_;
}

void Calculator::put(std::string &text)
{
    bar_ = text;
}
