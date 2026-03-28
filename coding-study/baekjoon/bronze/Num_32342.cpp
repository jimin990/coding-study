#include <iostream>
#include <string>

int main(void)
{
    int N;

    std::cin >> N;

    while(N--)
    {
        std::string str;

        std::cin >> str;

        int count = 0; 

        for(size_t i =0;i<str.size();i++)
        {
            int f = str.find("WOW",i); 
            if(f == std::string::npos) break;
            
            count++;

            i=f;
        }

        std::cout << count << "\n";
    }

    return 0;
}