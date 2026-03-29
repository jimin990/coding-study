#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
    std::string str;

    std::cin >> str;

    std::string rstr = str;
    std::reverse(rstr.begin(),rstr.end());

    if(str == rstr)
    {
        std::cout << "true";
    }else
    {
        std::cout << "false";
    }
    return 0;
}