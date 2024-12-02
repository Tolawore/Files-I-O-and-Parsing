#include "FileHandler.hpp"
#include <fstream>
#include <sstream>

std::vector<Product> FileHandler::readProducts(const std::string& filename) {
    std::vector<Product> products;
    std::ifstream file(filename);
    std::string line;
    getline(file, line); // Skip the header

    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string name, category, temp;
        double price;

        getline(ss, name, ',');
        ss >> price >> std::ws; // Read price and consume any whitespace
        getline(ss, category);

        products.push_back(Product(-1, name, price, category)); // ID is not used
    }

    file.close();
    return products;
}

void FileHandler::writeProducts(const std::string& filename, const std::vector<Product>& products) {
    std::ofstream file(filename);
    file << "Name,Price,Category\n";

    for (const auto& product : products) {
        file << product.name << "," << product.price << "," << product.category << "\n";
    }

    file.close();
}
