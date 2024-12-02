#include "Product.hpp"
#include "FileHandler.hpp"
#include <iostream>

int main() {
    std::string filename = "products.csv";
    std::vector<Product> products = FileHandler::readProducts(filename);

    double percentage;
    std::string category;
    std::cout << "Enter the percentage increase: ";
    std::cin >> percentage;
    std::cout << "Enter the category: ";
    std::cin >> category;

    for (auto& product : products) {
        if (product.category == category) {
            product.increasePrice(percentage);
        }
    }

    FileHandler::writeProducts("updated_products.csv", products);
    return 0;
}
