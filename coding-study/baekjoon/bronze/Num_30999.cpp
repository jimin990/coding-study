#include <iostream>
#include <string>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    int count = 0;

    while(N--)
    {
        int O = 0, X = 0;

        std::string str;

        std::cin >> str;

        for(int i =0;i<M;i++)
        {
            if(str[i] == 'O') O++;
            else X++;
        }

        if(O > X) count++;
    }

    std::cout << count;

    return 0;
}