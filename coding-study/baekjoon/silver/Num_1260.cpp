#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

void dfs(int V,std::vector<bool> &visited,std::vector<std::vector<int>> &graph){

    visited[V] = true;

    std::cout << V + 1 << " ";

    for(int i =0;i<graph[V].size();i++){
        if(!visited[graph[V][i]]){
            dfs(graph[V][i],visited,graph);
        }
    }

}

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N, M, V;

    std::cin >> N >> M >> V;

    std::vector<std::vector<int>> graph(N);

    std::vector<bool> visited(N,false);

    for(int i =0;i<M;i++){

        int x,y;

        std::cin >> x >> y;

        graph[x-1].push_back(y-1);
        graph[y-1].push_back(x-1);
    }

    for(int i =0;i<N;i++){
        std::sort(graph[i].begin(),graph[i].end());
    }

    dfs(V-1,visited,graph);

    std::cout << "\n";

    std::fill(visited.begin(),visited.end(),false);

    std::queue<int> que;

    que.push(V-1);

    visited[V-1] = true;

    while(!que.empty()){
        int tmp = que.front(); que.pop();

        std::cout << tmp + 1<< " ";

        for(int i =0;i<graph[tmp].size();i++){
            if(!visited[graph[tmp][i]]){
                que.push(graph[tmp][i]);

                visited[graph[tmp][i]] = true;
            }
        }

    }

    return 0;
}