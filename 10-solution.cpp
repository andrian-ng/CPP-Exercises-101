#include <iostream>
#include <cstdint>

double power (double x, int32_t n);

int main(void){
    double x;
    int32_t n;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter an integer n: ";
    std::cin >> n;
    std::cout << "Power: " << power(x, n) << std::endl;
    return 0;
}

// Luy thua nhanh (binary exponentiation): O(log n)
// Quy uoc 0^0 = 1; n < 0 thi x^n = 1 / x^(-n)
double power (double x, int32_t n){
    int64_t e = n;              // int64_t de -INT32_MIN khong bi tran
    bool negative = e < 0;
    if (negative) e = -e;

    double result = 1;
    while (e > 0){
        if (e % 2 == 1) result *= x;
        x *= x;
        e /= 2;
    }
    return negative ? 1.0 / result : result;
}
