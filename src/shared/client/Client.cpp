#include "Client.hpp"
#include <stdexcept>

Client::Client(std::string name, std::string surname, int age) : name_(name), surname_(surname), age_(age)
{
    // constructor
}

std::string Client::getName()
{
    return name_;
}

std::string Client::getSurname()
{
    return surname_;
}

int Client::getAge()
{
    return age_;
}
