#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    int t = N / 10;
    int num = N % 10;

    std::cout << (t == num ? "1" : "0");

    return 0;
}