#include <iostream>
#include <string>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

std::string add(const std::string& a, const std::string& b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {

    std::cout << "Adding two integers: " << add(10, 20) << std::endl;
    std::cout << "Adding two doubles: " << add(5.5, 3.3) << std::endl;
    std::cout << "Concatenating strings: " << add(std::string("Hello, "), "World!") << std::endl;
    std::cout << "Adding three integers: " << add(1, 2, 3) << std::endl;

    return 0;
}