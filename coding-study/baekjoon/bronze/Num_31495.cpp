#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    std::getline(std::cin,str);

    if(str[0] == '\"' && str[str.size()-1] == '\"' && str.size() > 2)
    {
        for(int i =1;i<str.size()-1;i++)
        {
            std::cout << str[i];
        }
    }else
    {
        std::cout << "CE";
    }

    return 0;
}
