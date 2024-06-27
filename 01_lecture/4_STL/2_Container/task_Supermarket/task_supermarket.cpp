#include <iostream>
#include <map>
#include <vector>

class Product {
public:
    Product() : m_name(""), m_price(0.0), m_category("") {} //Default constructor needed for map!
    Product(const std::string& name, double price, std::string category) : m_name(name), m_price(price), m_category(category) {}

    std::string getName() const {
        return m_name;
    }

    double getPrice() const {
        return m_price;
    }

    std::string getCategory() const {
        return m_category;
    }

private:
    std::string m_name;
    double m_price;
    std::string m_category;

};


int main() {
    std::map<std::string, Product> products;
    std::vector<std::string> receipt;

    // Add products and their prices to the map
    products["Apple"] = Product("Apple", 2.49, "Fruit");
    products["Banana"] = Product("Banana", 1.49, "Fruit");
    products["Meat"] = Product("Steak", 7.99, "Meat");
    // Add more products if needed

    // Simulate a customer buying products
    while (true) {

        std::cout << "Available products: " << std::endl;
        for (const auto& [key, value] : products) {
            std::cout << key << std::endl;
        }

        std::string product;
        std::cout << "Enter a product name (or 'done' to finish): ";
        std::cin >> product;

        if (product == "done") {
            break;
        }

        if (products.find(product) == products.end()) {
            std::cout << "Sorry, we don't have that product.\n";
        } else {
            receipt.push_back(product);
        }
    }

    // Calculate the total price
    double totalPrice = 0.0;
    for (const auto& item : receipt) {
        totalPrice += products[item].getPrice();
    }

    // Print the receipt
    std::cout << "Receipt:\n";
    for (const auto& item : receipt) {
        std::cout << item << " (" << products[item].getCategory() << ") - $" << products[item].getPrice() << "\n";
    }
    std::cout << "Total: $" << totalPrice << "\n";

    return 0;
}