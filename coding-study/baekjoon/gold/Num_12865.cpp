#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int N, K;

    std::cin >> N >> K;

    N++;
    K++;

    std::vector<int> weight(N,0);
    std::vector<int> value(N,0);

    std::vector<std::vector<int>> DP(N,std::vector<int>(K,0));

    for(int i =1;i<N;i++)
    {
        std::cin >> weight[i] >> value[i];  
    }

    for(int i =1;i<N;i++)
    {
        for(int w = 1;w<K;w++)
        {
            if(weight[i] <= w)
            {
                DP[i][w] = std::max(DP[i-1][w-weight[i]] + value[i], DP[i-1][w]);
            }else
            {
                DP[i][w] = DP[i-1][w];
            }
        }
    }

    std::cout << DP[N-1][K-1];

    return 0;
}