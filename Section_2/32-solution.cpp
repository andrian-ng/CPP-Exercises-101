#include <iostream>
#include <cstdint>
#include <cmath>

bool is_perfect_square(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Is perfect square: " << (is_perfect_square(n) ? "Yes" : "No") << std::endl;
    return 0;
}

// sqrt() works on doubles and can be off by 1 for large n, so adjust with integers
bool is_perfect_square(int64_t n){
    if (n < 0) return false;
    int64_t r = static_cast<int64_t>(std::sqrt(static_cast<double>(n)));
    while (r > 0 && r > n / r){
        r--;
    }
    while ((r + 1) <= n / (r + 1)){
        r++;
    }
    return r * r == n;
}
