#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double N;
    std::cin >> N;

    double result = std::floor((N / 4) * 100) / 100;

    std::cout << std::fixed << std::setprecision(2) << result;
    return 0;
}
