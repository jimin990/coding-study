#include <iostream>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    std::string str;

    std::cin >> str;

    if(str.find("gori") != std::string::npos)
    {
        std::cout << "YES";
    }else
    {
        std::cout << "NO";
    }
    
    return 0;
}