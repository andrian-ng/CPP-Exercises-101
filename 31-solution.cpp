#include <iostream>
#include <cstdint>

bool is_prime(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Is prime: " << (is_prime(n) ? "Yes" : "No") << std::endl;
    return 0;
}

// Chi can thu cac uoc den sqrt(n); bo qua so chan sau khi kiem tra 2
bool is_prime(int64_t n){
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0) return false;
    for (int64_t i = 3; i <= n / i; i += 2){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
