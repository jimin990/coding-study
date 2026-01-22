#include <iostream>

int main(void)
{
    int num = 0;
    for(int i =0;i<5;i++)
    {
        int n;
        std::cin >> n;

        num ^= n;
    }

    std::cout << num;

    return 0;
}