#include <iostream>
int main() {
    double l, a, b;
    std::cin >> l >> a >> b;
    double el_makan = (a * l) / (a + b);
    
    std::cout << el_makan << std::endl;
    
    return 0;
}