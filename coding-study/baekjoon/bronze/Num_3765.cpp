#include <iostream>
#include <string>

int main(void)
{
    std::string str;
    while(std::getline(std::cin, str))
    {
        std::cout << str << "\n";
    }

    return 0;
}