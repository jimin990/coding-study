#include <iostream>
#include <vector>
#include <queue>

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    std::vector<std::vector<int>> big_arr(N);
    std::vector<std::vector<int>> small_arr(N);

    for (int i = 0; i < M; i++)
    {
        int bead1, bead2;

        std::cin >> bead1 >> bead2;

        bead1--, bead2--;

        big_arr[bead1].push_back(bead2);
        small_arr[bead2].push_back(bead1);
    }

    std::vector<int> big(N, 0);
    std::vector<int> small(N, 0);

    for (int i = 0; i < N; i++)
    {
        std::vector<bool> visited(N, false);
        std::queue<int> q;

        q.push(i);
        visited[i] = true;

        while (!q.empty())
        {
            int p = q.front();
            q.pop();

            for (int j = 0; j < big_arr[p].size(); j++)
            {
                if (!visited[big_arr[p][j]])
                {
                    q.push(big_arr[p][j]);
                    visited[big_arr[p][j]] = true;

                    big[i]++;
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        std::vector<bool> visited(N, false);
        std::queue<int> q;

        q.push(i);
        visited[i] = true;

        while (!q.empty())
        {
            int p = q.front();
            q.pop();

            for (int j = 0; j < small_arr[p].size(); j++)
            {
                if (!visited[small_arr[p][j]])
                {
                    q.push(small_arr[p][j]);
                    visited[small_arr[p][j]] = true;

                    small[i]++;
                }
            }
        }
    }

    int result = 0;

    for (int i = 0; i < N; i++)
    {
        if (big[i] > (N - ((N + 1) / 2)) || small[i] > (N - ((N + 1) / 2)))
            result++;
    }

    std::cout << result;

    return 0;
}