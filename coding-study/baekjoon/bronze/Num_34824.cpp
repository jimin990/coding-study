#include <iostream>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    for(int i =0;i<N;i++)
    {
        std::string str;

        std::cin >> str;

        if(str == "yonsei")
        {
            std::cout << "Yonsei Won!";
            return 0;
        }
        else if(str == "korea")
        {
            std::cout << "Yonsei Lost...";
            return 0;
        }
        
    }

    return 0;
}