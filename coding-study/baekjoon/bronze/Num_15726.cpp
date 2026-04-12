#include <iostream>

int main(void)
{
    long long A, B, C, D;

    std::cin >> A >> B >> C;

    long long cal1 = (A * B) / C;
    long long cal2 = (A * C) / B;

    if(cal1 > cal2)
    {
        std::cout << cal1;
    }else{
        std::cout << cal2;
    }

    return 0;
}