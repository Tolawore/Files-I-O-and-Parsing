#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include "Product.hpp"
#include <vector>

class FileHandler {
public:
    static std::vector<Product> readProducts(const std::string& filename);
    static void writeProducts(const std::string& filename, const std::vector<Product>& products);
};

#endif
