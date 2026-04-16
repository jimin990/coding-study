#include <iostream>

int main(void)
{
    float a, b;

    std::cin >> a >> b;

    int tmp = a - (a * (b/100));

    std::cout << (tmp >= 100 ? "0" : "1");

    return 0;
}