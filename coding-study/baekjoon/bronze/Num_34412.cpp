#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    std::cout << (N >= 13 ?  N + 1 : N);
}