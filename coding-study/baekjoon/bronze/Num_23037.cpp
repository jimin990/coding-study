#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    long long five = 0;

    for(int i = 10000;i>0;i/=10)
    {
        int num = N / i;

        N %= i;
        
        five += num * num * num * num * num;
    }

    std::cout << five;

    return 0;
}