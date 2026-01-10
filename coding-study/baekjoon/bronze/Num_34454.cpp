#include <iostream>

int main(void) {
    int N, C, P;
    std::cin >> N >> C >> P;

    N <= C * P ? std::cout << "yes" : std::cout << "no";

    return 0;
}
