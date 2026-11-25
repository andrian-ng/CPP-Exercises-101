#include <iostream>
#include <cstdint>
#include <iomanip>
#include <cmath>

double sum (double x, int64_t n);

int main(void){
    int64_t n;
    double x;
    std::cout << "Enter an integer n: ";
    std::cin >> n;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Result: " << std::fixed << std::setprecision(6) << sum(x, n) << std::endl;
    return 0;
}

double sum (double x, int64_t n){
    double result = 0;
    double power = 1;
    for (int64_t i = 1; i <= n; i++){
        power *= x;
        result = std::sqrt(power + result);
    }
    return result;
}
