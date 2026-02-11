#include <iostream>
#include <vector>

int main()
{

    int N;

    std::cin >> N;

    long long sum = 0;

    long long anger = 0;

    while(N--)
    {
        int num;

        std::cin >> num;

        num == 1 ? anger++ : anger--;

        sum += anger;
    }

    std::cout << sum;

    return 0;
}