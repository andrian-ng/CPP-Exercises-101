#include <iostream>
#include <cstdint>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

long double product_divisor(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Product of divisors: " << product_divisor(n) << std::endl;
    return 0;
}

long double product_divisor(int64_t n){
    long double result = 1;
    if (n < 0) return result;
    for (int64_t i = 1; i <= n / i; i++){
        if (n % i == 0){
            result *= i;
            if (i != n / i){
                result *= n / i;
            }
        }
    }
    return result;
}