#include <iostream>

int main(void)
{
    int T;

    std::cin >> T;

    while(T--)
    {
        int N;

        std::cin >> N;

        std::cout << N / 25 << " ";

        N = N % 25;

        std::cout << N / 10 << " ";

        N = N % 10;

        std::cout << N / 5 << " ";

        N = N % 5;

        std::cout << N / 1 << "\n";
    }

    return 0;
}