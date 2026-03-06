#include <iostream>

int main(void)
{
    int s1, s2;

    std::cin >> s1 >> s2;

    std::cout << (s1 * 2 >= s2 ? "E" : "H");
    return 0;
}