#include <iostream>
#include <cstdint>

long double product_odd_divisor(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Product of odd divisors: " << product_odd_divisor(n) << std::endl;
    return 0;
}

long double product_odd_divisor(int64_t n){
    long double result = 1;
    if (n <= 0) return result;
    for (int64_t i = 1; i <= n / i; i++){
        if (n % i == 0){
            int64_t j = n / i;
            if (i % 2 != 0){
                result *= i;
            }
            if (j != i && j % 2 != 0){
                result *= j;
            }
        }
    }
    return result;
}
