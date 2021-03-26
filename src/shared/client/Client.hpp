#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>

class Client
{
public:
    Client(std::string name, std::string surname, int age);

    std::string getName();
    std::string getSurname();
    int getAge();

private:
    std::string name_;
    std::string surname_;
    int age_;
};


#endif //CLIENT_HPP
