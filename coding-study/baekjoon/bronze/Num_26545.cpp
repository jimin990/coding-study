#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    int sum = 0;

    while(N--)
    {
        int num;

        std::cin >> num;

        sum+=num;
    }
    
    std::cout << sum;


    return 0;
}