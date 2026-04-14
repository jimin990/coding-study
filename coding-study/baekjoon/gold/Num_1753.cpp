#include <iostream>
#include <vector>
#include <queue>
#include <utility>

const int INF = 1e9;

int main(void)
{
    int V, E;

    std::cin >> V >> E;

    int K;

    std::cin >> K;

    K--;

    std::vector<std::vector<std::pair<int,int>>> graph(V);

    std::vector<int> dist(V,INF);

    dist[K] = 0;

    for(int i =0;i<E;i++)
    {
        int u, v, w;

        std::cin >> u >> v >> w;

        u--,v--;

        graph[u].push_back({w,v});
    }

    std::priority_queue<std::pair<int,int>,std::vector<std::pair<int,int>>,std::greater<std::pair<int,int>>> pq;

    pq.push({0,K});

    while(!pq.empty())
    {
        int cur_weight = pq.top().first;
        int cur = pq.top().second; pq.pop();

        if(dist[cur] < cur_weight) continue;

        for(auto a : graph[cur])
        {
            int next_weight = a.first;
            int next = a.second;

            if(next_weight + cur_weight > dist[next]) continue;

            dist[next ] = next_weight + cur_weight;

            pq.push({next_weight + cur_weight, next});
        }
    }

    for(auto a : dist)
    {
        if(a == INF)
        {
            std::cout << "INF" << "\n";
        }else
        {
            std::cout << a << "\n";
        }
    }

    return 0;
}