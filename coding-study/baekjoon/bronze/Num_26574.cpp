#include <iostream>

int main(void)
{

    int N;

    std::cin >> N;

    for(int i =0;i<N;i++)
    {
        int num;
        std::cin >> num;

        std::cout << num << " " << num << "\n";
    }

    return 0;
}