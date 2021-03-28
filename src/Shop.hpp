#ifndef SHOP_HPP
#define SHOP_HPP

#include "shared/calculator/Calculator.hpp"
#include "shared/client/Client.hpp"
#include "shared/product/Product.hpp"

#include <vector>

class Shop
{
public:
    Shop();

    void addProduct(std::string name, int price);
    int calcPriceToBuyAnyProduct();

    void addClient(std::string name, std::string surname, int age);
    Client findClient(std::string name, std::string surname);

private:
    std::vector<Product> products_;
    std::vector<Client> clients_;
    Calculator calculator_;
};


#endif //SHOP_HPP
