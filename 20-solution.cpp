#include <iostream>
#include <cstdint>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

std::vector<int64_t> divisor(int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::vector<int64_t> re = divisor(n);
    std::cout << "Divisors: ";
    for (auto it = re.begin(); it != re.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}

std::vector<int64_t> divisor(int64_t n){
    std::vector<int64_t> result;
    if (n < 0) return result;
    for (int64_t i = 1; i <= n / i; i++){
        if (n % i == 0){
            result.push_back(i);
            if (i != n / i){
                result.push_back(n / i);
            }
        }
    }
    std::sort(result.begin(), result.end());
    return result;

}