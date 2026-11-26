#include <iostream>
#include <cstdint>

int64_t sum_digit(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Sum of digits: " << sum_digit(n) << std::endl;
    return 0;
}

int64_t sum_digit(int64_t n){
    int64_t result = 0;
    while (n > 0){
        result += n % 10;
        n /= 10;
    }
    return result;
}
