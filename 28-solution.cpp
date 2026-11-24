#include <iostream>
#include <cstdint>

int64_t sum_proper_divisor(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Sum of proper divisors: " << sum_proper_divisor(n) << std::endl;
    return 0;
}

// Uoc thuc su: cac uoc cua n, tru chinh n
int64_t sum_proper_divisor(int64_t n){
    int64_t result = 0;
    if (n <= 0) return result;
    for (int64_t i = 1; i <= n / i; i++){
        if (n % i == 0){
            result += i;
            if (i != n / i){
                result += n / i;
            }
        }
    }
    return result - n;
}
