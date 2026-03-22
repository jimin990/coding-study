#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    std::cin >> str;

    std::string result = "";

    result += str[0];

    for(size_t i=0;i<str.size();i++)
    {
        if(str[i] == '-') result+=str[i+1];
    }

    std::cout << result;

    return 0;
}