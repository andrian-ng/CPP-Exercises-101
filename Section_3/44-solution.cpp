#include <iostream>
#include <cstdint>

int64_t product_digit(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Product of digits: " << product_digit(n) << std::endl;
    return 0;
}

int64_t product_digit(int64_t n){
    if (n == 0) return 0;
    int64_t result = 1;
    while (n > 0){
        result *= n % 10;
        n /= 10;
    }
    return result;
}
