#include <iostream>
#include <vector>
#include <queue>
#include <utility>

const int INF = 1e9;

int main(void)
{
    int N, M, X;

    std::cin >> N >> M >> X;

    X--;

    std::vector<std::vector<std::pair<int,int>>> arr(N);

    std::vector<std::vector<std::pair<int,int>>> reverse_arr(N);

    std::vector<int> min(N,INF);

    std::vector<int> reverse_min(N,INF);

    std::vector<int> des_time(N,0);

    min[X] = 0;

    reverse_min[X] = 0;

    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> pq;
    
    for(int i =0;i<M;i++)
    {
        int is, id, T;

        std::cin >> is >> id >> T;

        is--,id--;

        arr[is].push_back({T,id});
        reverse_arr[id].push_back({T,is});
    }

    pq.push({0,X});

    while(!pq.empty())
    {
        int time = pq.top().first;
        int cur = pq.top().second; pq.pop();

        if(min[cur] < time) continue;

        for(auto a : arr[cur])
        {
            int next_time = a.first;
            int next = a.second;

            if(min[next] < time + next_time) continue;

            min[next] = time + next_time;
            pq.push({time+next_time,next});
        }
    }

    pq.push({0,X});
    
    while(!pq.empty())
    {
        int time = pq.top().first;
        int cur = pq.top().second; pq.pop();

        if(reverse_min[cur] < time) continue;

        for(auto a : reverse_arr[cur])
        {
            int next_time = a.first;
            int next = a.second;

            if(reverse_min[next] < time + next_time) continue;

            reverse_min[next] = time + next_time;
            pq.push({time+next_time,next});
        }
    }

    int max = min[0] + reverse_min[0];

    for(int i =0;i<N;i++)
    {
        if(max < min[i] + reverse_min[i]) max = min[i] + reverse_min[i];
    }

    std::cout << max;
    return 0;
}