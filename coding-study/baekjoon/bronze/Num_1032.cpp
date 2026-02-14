#include <iostream>
#include <vector>

int main(void)
{
    int N;

    std::cin >> N;

    std::vector<std::string> arr(N);

    for(int i=0;i<N;i++)
    {
        std::cin >> arr[i];
    }

    std::string result = "";

    for(size_t i=0;i<arr[0].size();i++)
    {
        bool isSame = true;

        for(int j =0;j<N;j++) 
        {
            if(arr[0][i] != arr[j][i]) isSame = false;
        }
        
        if(isSame)
        {
            result.push_back(arr[0][i]);
        }else
        {
            result.push_back('?');
        }
    }

    std::cout <<  result;

    return 0;
}