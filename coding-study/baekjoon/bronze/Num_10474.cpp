#include <iostream>

int main(void)
{
    while(true)
    {
        int N, M;

        std::cin >> N >> M;

        if(N == 0 && M == 0) return 0;

        std::cout << N / M << " " << N % M << " / " << M << "\n";
    }

    return 0;
}