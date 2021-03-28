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

void Shop::addClient(std::string name, std::string surname, int age)
{
    clients_.push_back(Client(name, surname, age));
}

Client Shop::findClient(std::string name, std::string surname)
{
    for(std::vector<Client>::iterator it = clients_.begin(); it != clients_.end(); ++it) {
        if(it->getName() == name && it->getSurname() == surname) {
            return *it;
        }
    }
}
