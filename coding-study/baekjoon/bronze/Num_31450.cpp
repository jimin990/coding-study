#include <iostream>

int main(void)
{
    int M, N;

    std::cin >> M >> N;

    std::cout << (M % N == 0 ? "Yes" : "No");
    
    return 0;
}