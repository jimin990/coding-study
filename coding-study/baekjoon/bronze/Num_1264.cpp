#include <iostream>
#include <string>

int main(void)
{
    while(true)
    {
        std::string str;

        std::getline(std::cin,str);

        if(str == "#") break;

        size_t count = 0;

        for(char c : str)
        {
            if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') count++;
        }

        std::cout << count << "\n";
    }

    return 0;
}