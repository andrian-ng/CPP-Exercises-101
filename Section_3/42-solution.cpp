#include <iostream>
#include <cstdint>

int64_t count_digit(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Number of digits: " << count_digit(n) << std::endl;
    return 0;
}

int64_t count_digit(int64_t n){
    if (n == 0) return 1;
    int64_t count = 0;
    while (n > 0){
        count++;
        n /= 10;
    }
    return count;
}
