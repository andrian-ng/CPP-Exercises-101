#include <iostream>
#include <cstdint>
#include <string>

uint64_t product (int32_t n);

int main(void){
    int32_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Product: " << product(n) << std::endl;
    return 0;
}

uint64_t product (int32_t n){
    uint64_t result = 1;
    for (int32_t i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}