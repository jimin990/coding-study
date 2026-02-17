#include <iostream>
#include <string>

int main(void)
{
    int N;

    std::string str;

    std::cin >> N >> str;

    size_t count = 0;
    for(size_t i = 0;i<str.size();i++)
    {
        if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o') count++;
    }

    std::cout << count;    

    return 0;
}