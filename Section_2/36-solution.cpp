#include <iostream>
#include <cstdint>
#include <iomanip>
#include <cmath>

double sum (int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Result: " << std::fixed << std::setprecision(6) << sum(n) << std::endl;
    return 0;
}

// Innermost root is sqrt(2), the outermost is the n-th root of (n + ...)
double sum (int64_t n){
    double result = 0;
    for (int64_t i = 2; i <= n; i++){
        result = std::pow(i + result, 1.0 / i);
    }
    return result;
}
