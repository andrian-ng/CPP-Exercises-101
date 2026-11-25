#include <iostream>
#include <cstdint>

int64_t find_k(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Largest k: " << find_k(n) << std::endl;
    return 0;
}

// Returns 0 when no positive k exists (n <= 1)
int64_t find_k(int64_t n){
    int64_t k = 0;
    int64_t s = 0;
    while (s + (k + 1) < n){
        k++;
        s += k;
    }
    return k;
}
