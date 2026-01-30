#include <iostream>

int main(void)
{
    long long A, B, C;

    std::cin >> A >> B >> C;

    std::cout << (A + B == C ? "correct!" : "wrong!");

    return 0;
}