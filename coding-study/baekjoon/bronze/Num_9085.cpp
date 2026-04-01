#include <iostream>

int main(void)
{
    int T; 

    std::cin >> T;

    while(T--)
    {
        int N;

        std::cin >> N;

        int sum = 0;

        while(N--)
        {
            int tmp;

            std::cin >> tmp;

            sum+=tmp;
        }

        std::cout << sum << "\n";
    }

    return 0;
}