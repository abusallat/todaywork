#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;

    return 0;
}
