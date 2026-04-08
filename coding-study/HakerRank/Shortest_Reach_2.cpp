#include <iostream>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

const int INF = 1e9; 

vector<int> shortestReach(int n, vector<vector<int>> edges, int s) 
{
    const int INF = 1e9; 
    n++;

    vector<int> dist(n,INF);

    vector<vector<int>> graph(n,vector<int>(n,-1));
        
    for(int i=0;i<edges.size();i++)
    {
        int x = edges[i][0], y = edges[i][1], l = edges[i][2];
        if(graph[x][y] == -1 || graph[x][y] > l)
        {
            graph[x][y] = l;
            graph[y][x] = l;
        }
    }

    dist[s] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

    pq.push({0,s});

    while(!pq.empty())
    {
        int pre_dist = pq.top().first;
        int node = pq.top().second; pq.pop();

        if(dist[node] < pre_dist) continue;

        for(size_t i = 1;i<n;i++)
        {
            if(graph[node][i] == -1) continue;

            int next_dist = graph[node][i];
            int next_node = i;

            if(dist[next_node] < (pre_dist + next_dist)) continue;

            dist[next_node] = (pre_dist + next_dist);
            pq.push({dist[next_node], next_node});
        }
    }

    dist.erase(dist.begin() + s);

    dist.erase(dist.begin());

    for(size_t i = 0;i<dist.size();i++)
    {
        if(dist[i] == INF) dist[i] = -1;
    }

    return dist;
}

int main(void)
{
    int T;

    cin >> T;

    while(T--)
    {
        int n,m;

        cin >> n >> m;

        vector<int> dist(n,INF);

        vector<vector<int>> graph(n,vector<int>(n,-1));
        
        for(int i=0;i<m;i++)
        {
            int x, y, s;

            cin >> x >> y >> s;

            x--, y--;

            graph[x][y] = s;
            graph[y][x] = s;
        }

        int s;

        cin >> s;

        s--;

        dist[s] = 0;

        priority_queue<pair<int,int>> pq;

        pq.push({0,s});

        while(!pq.empty())
        {
            int pre_dist = pq.top().first;
            int node = pq.top().second; pq.pop();

            if(dist[node] < pre_dist) continue;

            for(size_t i = 0;i<n;i++)
            {
                if(graph[node][i] == -1) continue;

                int next_dist = graph[node][i];
                int next_node = i;

                if(dist[next_node] < (pre_dist + next_dist)) continue;

                dist[next_node] = (pre_dist + next_dist);
                pq.push({dist[next_node], next_node});
            }
        }

        for(int i =0;i<n;i++)
        {
            if(i == s) continue;

            std::cout << dist[i] << " ";
        }

    }

    return 0;
}