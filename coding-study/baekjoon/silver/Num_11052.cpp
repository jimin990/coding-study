#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int N;

    std::cin >> N;
    N++;

    std::vector<int> card(N,0);
    std::vector<int> max_arr(N,0);

    for(int i =1;i<N;i++)
    {
        std::cin >> card[i];
    }

    for(int i =1;i<N;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            max_arr[i] = std::max(max_arr[i],max_arr[i-j] + card[j]);
        }
    }

    std::cout << max_arr[N-1];

    return 0;
}