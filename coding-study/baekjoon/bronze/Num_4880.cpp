#include <iostream>

int main(void)
{
    while(true)
    {
        int a1, a2, a3;

        std::cin >> a1 >> a2 >> a3;

        if(a1 == 0 && a2 == 0 && a3 ==0) return 0;

        int a21 = a2 - a1;
        int a32 = a3 - a2;

        if(a21 == a32)
        {
            std::cout << "AP " << a3+ a32 << "\n";
        }else
        {
            std::cout << "GP " << a3 * (a2 / a1) << "\n";
        }
    }

    return 0;
}