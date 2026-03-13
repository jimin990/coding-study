#include <iostream>

int main(void)
{
    int x,y;

    std::cin >> x >> y;

    std::cout << (y >= x ? y - x : y + x);
    return 0;
}