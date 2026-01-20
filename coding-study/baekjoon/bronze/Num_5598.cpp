#include <iostream>
#include <string>

int main(void)
{
    std::string str;
    
    std::cin >> str;

    for(int i =0;i<str.size();i++)
    {
        if(str[i] == 'A')
        {
            std::cout << 'X';
        }else if(str[i] == 'B')
        {
            std::cout << 'Y';
        }else if(str[i] == 'C')
        {
            std::cout << 'Z';
        }else{
            char c= (str[i] - 3);
            std::cout << c;
        }
        
    }

    return 0;
}