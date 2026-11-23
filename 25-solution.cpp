#include <iostream>
#include <cstdint>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

int64_t sum_even_divisor(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Sum of even divisors: " << sum_even_divisor(n) << std::endl;
    return 0;
}

int64_t sum_even_divisor(int64_t n) {
    int64_t result = 0;
    if (n <= 0) return 0;
    for (int64_t i = 1; i <= n / i; ++i) {
        if (n % i == 0) {
            int64_t j = n / i;
            if (i % 2 == 0)
                result += i;
            if (j != i && j % 2 == 0)
                result += j;
        }
    }
    return result;
}