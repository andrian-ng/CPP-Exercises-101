#include <iostream>
#include <cstdint>

int64_t count_even_divisor(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Number of even divisors: " << count_even_divisor(n) << std::endl;
    return 0;
}

int64_t count_even_divisor(int64_t n){
    int64_t result = 0;
    if (n <= 0) return result;
    for (int64_t i = 1; i <= n / i; i++){
        if (n % i == 0){
            int64_t j = n / i;
            if (i % 2 == 0){
                result++;
            }
            if (j != i && j % 2 == 0){
                result++;
            }
        }
    }
    return result;
}
