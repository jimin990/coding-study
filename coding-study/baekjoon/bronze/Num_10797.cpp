#include <iostream>

int main()
{
    int N;

    std::cin >> N;
    
    int count = 0;

    for(int i =0;i<5;i++)
    {
        int num;

        std::cin >> num;

        if(num == N) count++;
    }

    std::cout << count;

    return 0;
}