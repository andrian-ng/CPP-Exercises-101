#include <iostream>
#include <cstdint>

int64_t largest_odd_divisor(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Largest odd divisor: " << largest_odd_divisor(n) << std::endl;
    return 0;
}

// n = 2^k * m (m odd) => the largest odd divisor is m: divide by 2 until n is odd
int64_t largest_odd_divisor(int64_t n){
    if (n <= 0) return 0;
    while (n % 2 == 0){
        n /= 2;
    }
    return n;
}
