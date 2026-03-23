#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    std::cout << "Gnomes:\n";

    for(int i =0;i<N;i++)
    {
        int a, b, c;

        std::cin >> a >> b >> c;

        if(a < b && b < c && a < c)
        {
            std::cout << "Ordered\n";
        }else if(a > b && b > c && a > c)
        {
            std::cout << "Ordered\n";
        }else
        {
            std::cout << "Unordered\n";
        }
    }

    return 0;
}