#include <iostream>

int main(void)
{
    long long N;
    std::cin >> N;

    long long discount;

    if (N >= 1000000)
        discount = N * 20 / 100;
    else if (N >= 500000)
        discount = N * 15 / 100;
    else if (N >= 100000)
        discount = N * 10 / 100;
    else
        discount = N * 5 / 100;

    std::cout << discount << " " << N - discount;

    return 0;
}