#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    while(std::getline(std::cin,str))
    {
        for(char c : str)
        {
            if(c == 'e')
            {
                std::cout << "i";
            }else if(c == 'E')
            {
                std::cout << "I";
            }else if(c == 'i')
            {
                std::cout << "e";
            }else if(c == 'I')
            {
                std::cout << "E";
            }else
            {
                std::cout << c;
            }
        }

        std::cout << "\n";
    }

    return 0;
}