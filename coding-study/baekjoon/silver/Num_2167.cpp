#include <iostream>
#include <vector>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    std::vector<std::vector<int>> arr(N, std::vector<int>(M,0));

    for(int i =0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int K;

    std::cin >> K;

    for(int q =0;q<K;q++)
    {
        int i, j ,x, y;

        long long sum = 0;

        std::cin >> i >> j >> x >> y;

        i--, j--, x--, y--;

        for(int f = i; f<=x;f++)
        {
            for(int s = j;s<=y;s++)
            {
                sum += arr[f][s];
            }
        }

        std::cout << sum << "\n";
    }

    return 0;
}