#include <iostream>
#include <vector>

int main(void)
{
    int N;

    std::cin >> N;

    std::vector<long long> arr(N,0);

    bool isAscend = true;

    for(int i =0;i<N;i++)
    {
        std::cin >> arr[i];
    }

    for(int i =1;i<N;i++)
    {
        if(arr[i - 1] >= arr[i])
        {
            isAscend = false;
            break;
        }
    }

    std::cout << (isAscend ? "1" : "0");

    return 0;
}