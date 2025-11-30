#include <iostream>

int main(void)
{

    long A, B, C;

    std::cin >> A >> B >> C;
    std::cout << ((A+B) >= C * 2 ? (A+B) - (C * 2) : (A+B));

    return 0;
}