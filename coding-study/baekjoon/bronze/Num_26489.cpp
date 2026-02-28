#include <iostream>
#include <string>

int main(void)
{
    int N = 0;

    std::string str;
    
    while(std::getline(std::cin, str))
    {   
        N++;
    }

    std::cout << N;

    return 0;
}