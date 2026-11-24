#include <iostream>
#include <cstdint>

bool is_perfect_number(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Is perfect number: " << (is_perfect_number(n) ? "Yes" : "No") << std::endl;
    return 0;
}

bool is_perfect_number(int64_t n){
    if (n <= 1) return false;
    int64_t sum = 0;
    for (int64_t i = 1; i <= n / i; i++){
        if (n % i == 0){
            sum += i;
            if (i != n / i){
                sum += n / i;
            }
        }
    }
    return sum - n == n;
}
