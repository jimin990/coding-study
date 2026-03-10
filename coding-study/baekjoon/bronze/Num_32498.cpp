#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    int count = 0;

    for(int i =0;i<N;i++)
    {
        int M;

        std::cin >> M;

        if(M%2 != 0) count++;
    }

    std::cout << count;

    return 0;
}
