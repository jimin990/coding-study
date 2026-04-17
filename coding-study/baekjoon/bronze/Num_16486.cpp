#include <iostream>

int main(void)
{
    const float PI = 3.141592f;
    
    float d1 , d2;

    std::cin >> d1 >> d2;

    std::cout << (2 * d1) + (2 * d2 * PI);

    return 0;
}