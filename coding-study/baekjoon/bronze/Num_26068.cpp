#include <iostream>
#include <string>

int main(void)
{
    int T;

    std::cin >> T;

    int count = 0;

    while(T--)
    {
        std::string str;

        std::cin >> str;

        if(str.size() > 4) continue;

        std::string istr = str.substr(2, 2);

        int num = std::stoi(istr);

        if(num <= 90) count++;
    }

    std::cout << count;
    return 0;
}