#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

class Product {
public:
    int id;
    std::string name;
    double price;
    std::string category;

    Product(int id, std::string name, double price, std::string category);
    void increasePrice(double percentage);
};

#endif
