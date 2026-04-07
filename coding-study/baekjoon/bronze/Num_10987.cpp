#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    std::cin >> str;

    int count = 0;

    for(char c : str)
    {
        if(c == 'a' || c == 'e' || c == 'i'  || c == 'o' || c == 'u' ) count++;
    }

    std::cout << count;

    return 0;
}