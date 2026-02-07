#include <iostream>

int main(void)
{
    int Y, C, P;

    std::cin >> Y >> C >> P;

    int count = 0;
    
    while(Y >= 1 && C >=2 && P >=1)
    {
        count++;
        Y--,C-=2,P--;
    }

    std::cout << count;

    return 0;
}