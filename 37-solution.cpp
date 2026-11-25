#include <iostream>
#include <cstdint>
#include <iomanip>
#include <cmath>

double sum (int64_t n);

int main(void){
    int64_t n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Result: " << std::fixed << std::setprecision(6) << sum(n) << std::endl;
    return 0;
}

// The i-th step takes the (i + 1)-th root of (i + previous result)
double sum (int64_t n){
    double result = 0;
    for (int64_t i = 1; i <= n; i++){
        result = std::pow(i + result, 1.0 / (i + 1));
    }
    return result;
}
