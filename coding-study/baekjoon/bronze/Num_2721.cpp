#include <iostream>
#include <vector>

int main(void)
{
    int T;

    std::cin >> T;

    std::vector<long long> arr(302,0);

    for(int i=1;i<arr.size();i++)
    {
        arr[i] = arr[i-1] + i;
    }

    while(T--)
    {
        int N;

        std::cin >> N;

        long long sum = 0;

        for(int k = 1;k<=N;k++)
        {
            sum += k* arr[k+1];
        }

        std::cout << sum << "\n";
    }

    return 0;
}