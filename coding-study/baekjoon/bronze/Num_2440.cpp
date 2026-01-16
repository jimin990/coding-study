#include <iostream>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    for(int i =N;i>0;i--)
    {
        std::cout << std::string(i,'*') << "\n";
    }

    return 0;
}