#include <iostream>
#include <cstdint>
#include <string>
#include <numeric>
#include <cmath>

int64_t sum (int64_t x, int64_t n);
int64_t sumWithCMath (int64_t x, int64_t n);
int64_t sumWithMath (int64_t x, int64_t n);

int main(void){
    int64_t x;
    int64_t n;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter an integer n: ";
    std::cin >> n;
    std::cout << "Sum (loop): " << sum(x, n) << std::endl;
    std::cout << "Sum (pow): " << sumWithCMath(x, n) << std::endl;
    std::cout << "Sum (formula): " << sumWithMath(x, n) << std::endl;
    return 0;
}

int64_t sum (int64_t x, int64_t n){
    int64_t result = 0;
    int64_t temp = x * x;
    for (int64_t i = 1; i <= n; i++){
        result += temp;
        temp *= x * x;
    }
    return result;
}

int64_t sumWithCMath (int64_t x, int64_t n){
    int64_t result = 0;
    for (int i = 1; i <= n; i++) {
        result += pow(x, 2 * i);
    }
    return result;
}

int64_t sumWithMath (int64_t x, int64_t n){
    if (x == 0 || n <= 0) return 0;
    if (x == 1 || x == -1) return n;
    return (pow(x, 2)) * (1 - pow(x, 2 * n)) / (1 - pow(x, 2));
}