#include <iostream>

int main(void)
{
    int A, B, K, X;

    std::cin >> A >> B >> K >> X;

    int min = K - X;
    int max = K + X;

    int count = 0;

    for(int i = A;i<=B;i++)
    {
        if(min <= i && i <= max) count++;
    }

    if(count == 0)
    {
        std::cout << "IMPOSSIBLE";
        return 0;
    }

    std::cout << count;
    
    return 0;
}