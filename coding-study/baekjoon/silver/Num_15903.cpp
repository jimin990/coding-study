#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int n,m;

    std::cin >> n >> m;

    std::vector<long long> arr(n,0);

    for(int i =0;i<n;i++)
    {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    for(int i =0;i<m;i++)
    {
        long long temp = arr[0] + arr[1];

        arr[0] = temp;
        arr[1] = temp;

        std::sort(arr.begin(), arr.end());
    }

    long long sum = 0;

    for(int i =0;i<n;i++)
    {
        sum+=arr[i];
    }
    
    std::cout << sum;

    return 0;
}