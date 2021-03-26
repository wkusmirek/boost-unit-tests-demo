#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

class Product
{
public:
    Product(std::string name, int price);

    std::string getName();
    int getPrice();

private:
    std::string name_;
    int price_;
};


#endif //PRODUCT_HPP
