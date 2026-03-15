#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main(void)
{
    const int INF = 1e9;

    int N, M;

    std::cin >> N >> M;

    std::vector<std::vector<std::pair<int,int>>> gp(N);
    std::vector<int> min_cost(N,INF);

    for(int i =0;i<M;i++)
    {
        int dep, des, cost;

        std::cin >> dep >> des >> cost;

        dep--, des--;

        gp[dep].push_back({cost, des});
    }

    int start, end;

    std::cin >> start >> end;

    start--, end--;

    min_cost[start] = 0;

    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int,int>>> pq;

    pq.push({0,start});

    while(!pq.empty())
    {
        std::pair<int,int> temp = pq.top(); pq.pop(); 
        int cost = temp.first;
        int num = temp.second;

        if(min_cost[num] < cost) continue;

        for(std::pair<int,int> p : gp[num])
        {
            int next_cost = p.first;
            int next_num = p.second;

            if(min_cost[next_num] > (cost + next_cost))
            {
                min_cost[next_num] = cost + next_cost;
                pq.push({min_cost[next_num], next_num});
            }
        }
    }

    std::cout << min_cost[end];

    return 0;
}