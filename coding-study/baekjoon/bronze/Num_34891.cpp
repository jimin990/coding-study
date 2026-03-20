#include <iostream>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    int num = 0;

    num = N /M;

    if(N % M != 0) num++;

    std::cout << num;
    return 0;
}