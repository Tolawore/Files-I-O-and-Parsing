#include "Product.hpp"

Product::Product(int id, std::string name, double price, std::string category)
    : id(id), name(name), price(price), category(category) {}

void Product::increasePrice(double percentage) {
    price += price * (percentage / 100.0);
}
