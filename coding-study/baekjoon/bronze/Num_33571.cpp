#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    std::getline(std::cin,str);

    int count = 0;

    for(size_t i = 0;i<str.size();i++)
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'D' || str[i] == 'd' || str[i] == 'e' || str[i] == 'g' || str[i] == 'O' || str[i] == 'o' || str[i] == 'P' || str[i] == 'p' || str[i] == 'Q' || str[i] == 'q' || str[i] == 'R' || str[i] == 'b' || str[i] == '@')
        {
            count++;
        }else if(str[i] == 'B')
        {
            count+=2;
        }

    }

    std::cout << count;

    return 0;
}