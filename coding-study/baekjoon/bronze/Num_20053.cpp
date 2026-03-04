#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;

    std::cin >> T;

    while(T--)
    {
        int N;

        std::cin >> N;

        std::vector<int> arr(N,0);

        for(int i =0;i<N;i++)
        {
            std::cin >> arr[i];
        }

        std::sort(arr.begin(),arr.end());

        std::cout<< arr[0] << " " << arr[N-1] << "\n";
    }

    return 0;
}