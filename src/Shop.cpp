#include "Shop.hpp"
#include <stdexcept>

Shop::Shop()
{
    // constructor
}

void Shop::addProduct(std::string name, int price)
{
    products_.push_back(Product(name, price));
}

int Shop::calcPriceToBuyAnyProduct()
{
    calculator_.resetResult();
    for(std::vector<Product>::iterator it = products_.begin(); it != products_.end(); ++it) {
        calculator_.add(it->getPrice());
    }
    return calculator_.getResult();
}
