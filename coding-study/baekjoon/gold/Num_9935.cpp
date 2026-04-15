#include <iostream>
#include <string>
#include <stack>

int main(void)
{
    std::string str;
    std::string bomb;

    std::cin >> str >> bomb;

    std::string result = "";
    
    for(char c : str)
    {
        result.push_back(c);

        if(result.size() >= bomb.size())
        {
            bool match = true;

            for(int i =0;i<bomb.size();i++)
            {
                if(result[result.size() - bomb.size() + i] != bomb[i])
                {
                    match = false;
                    break;

                }
            }

            if(match)
            {
                result.erase(result.end() - bomb.size(),result.end());
            }
        }        
    }

    std::cout << (result.empty() ? "FRULA" : result);

    return 0;
}