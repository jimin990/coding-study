#include <iostream>
#include <string>

int main()
{
    int N;

    std::cin >> N;

    std::string str;

    std::cin >> str;

    int big = 0, secur = 0;

    for(int i = 0; std::string::npos != (i = str.find("bigdata",i));i+=7) big++;

    for(int i = 0; std::string::npos != (i =str.find("security",i));i+=8) secur++;

    if(big < secur)
    {
        std::cout << "security!";
    }else if(big > secur)
    {
        std::cout << "bigdata?";
    }else{
        std::cout << "bigdata? security!";
    }

    return 0;
}