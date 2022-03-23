#include "Calculator.hpp"
#include <stdexcept>

Calculator::Calculator(int num1, int num2) : num1_(num1), num2_(num2)
{
    // constructor
}

int Calculator::add() {
	int result = num1_ + num2_;
	return result;
}
