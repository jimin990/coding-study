#include <iostream>

int main(void)
{
    int H, M;

    std::cin >> H >> M;

    std::cout << (H * 60) + M; 
    return 0;
}