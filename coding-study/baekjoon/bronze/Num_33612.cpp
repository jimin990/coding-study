#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int y = 2024;
    int m = 8;

    int totalMonths = (y * 12 + (m - 1)) + (N - 1) * 7;

    int newY = totalMonths / 12;
    int newM = (totalMonths % 12) + 1;

    std::cout << newY << " " << newM;

    return 0;
}
