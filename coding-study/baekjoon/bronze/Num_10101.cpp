#include <iostream>

int main(void)
{
    int A, B ,C;

    std::cin >> A >> B >> C;

    if((A == B && B == C) && A == 60)
    {
        std::cout << "Equilateral";
    }else if((A + B + C) == 180 && ((A == B) || (B == C) || (C == A)))
    {
        std::cout << "Isosceles";
    }else if((A + B + C) == 180 && ((A != B) && (B != C) && (C != A)))
    {
        std::cout << "Scalene";
    }else if((A + B + C) != 180)
    {
        std::cout << "Error";
    }

    return 0;
}