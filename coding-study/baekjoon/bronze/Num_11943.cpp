#include <iostream>

int main(void)
{
    int A, B, C, D;

    std::cin >> A >> B >> C >> D;

    if((A + D) <= (B + C))
    {
        std::cout << (A + D);
    }else
    {
        std::cout << (B + C);
    }
    
    return 0;
}