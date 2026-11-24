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

// Tinh tu dau can trong cung ra ngoai: S(1) = sqrt(2), S(k) = sqrt(2 + S(k-1))
double sum (int64_t n){
    double result = 0;
    for (int64_t i = 1; i <= n; i++){
        result = std::sqrt(2 + result);
    }
    return result;
}
