#include <iostream>
#include <vector>
#include <queue>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, edge;

    std::cin >> N >> edge;

    std::vector<std::vector<int>> graph(N);

    std::vector<bool> visited(N,true);

    for(int i =0;i<edge;i++){

        int c1, c2;

        std::cin >> c1 >> c2;

        graph[c1-1].push_back(c2-1);
        graph[c2-1].push_back(c1-1);
    }

    int virusComputer = 0;

    std::queue<int> q;

    q.push(0);

    visited[0] = false;

    while(!q.empty()){

        int t = q.front(); q.pop();

        for(int i=0;i<graph[t].size();i++){

            if(visited[graph[t][i]]){

                virusComputer++;

                visited[graph[t][i]] = false;

                q.push(graph[t][i]);
            }

        }

    }

    std::cout << virusComputer;
    return 0;
}