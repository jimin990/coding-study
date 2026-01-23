#include <iostream>

int main(void)
{

    long long N;

    std::cin >> N;

    N%=3;

    if(N == 1)
    {
        std::cout << 'U';
    }else if(N == 2)
    {
        std::cout << 'O';
    }else
    {
        std::cout << 'S';
    }
    return 0;
}