#include <iostream>
#include <cstdint>
#include <string>

double sum (int64_t n);
std::string sumFraction(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Result: " << sum(n) << std::endl;
    std::cout << "Result fraction: " << sumFraction(n) << std::endl;
    return 0;
}

// Start from the innermost "1", each step wraps it as 1 / (1 + result)
double sum (int64_t n){
    double result = 1;
    for (int64_t i = 1; i <= n; i++){
        result = 1.0 / (1 + result);
    }
    return result;
}

// 1 / (1 + a/b) = b / (a + b), always already reduced (consecutive Fibonacci numbers)
std::string sumFraction(int64_t n){
    uint64_t numerator = 1;
    uint64_t denominator = 1;
    for (int64_t i = 1; i <= n; i++){
        uint64_t temp = numerator;
        numerator = denominator;
        denominator = temp + denominator;
    }
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}
