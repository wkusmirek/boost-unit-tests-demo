#include "Product.hpp"
#include <stdexcept>

Product::Product(std::string name, int price) : name_(name), price_(price)
{
    // constructor
}

std::string Product::getName()
{
    return name_;
}

int Product::getPrice()
{
    return price_;
}
