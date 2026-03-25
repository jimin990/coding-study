#include <iostream>

int main(void)
{
    int T;

    std::cin >> T;

    while(T--)
    {
        int N;

        std::cin >> N;
        
        if((N + 1) % (N % 100) == 0)
        {
            std::cout << "Good\n";
        }else
        {
            std::cout << "Bye\n";
        }
    }

    return 0;
}