#include <iostream>
#include <vector>

int N, M;

void recrusion(int i,std::vector<bool> &visited, std::vector<std::vector<bool>> &graph){

    visited[i] = false;

    for(int j =0;j<N;j++){
        if(graph[i][j]){

            graph[i][j] = false;
            graph[j][i] = false;
            recrusion(j,visited,graph);
        }
    }
}

int main(void){

    std::cin >> N >> M;

    std::vector<std::vector<bool>> graph(N,std::vector<bool>(N));

    std::vector<bool> visited(N,true);

    for(int i =0;i<M;i++){
        int u,v;

        std::cin >> u >> v;

        graph[u - 1][v - 1] = true;
        graph[v - 1][u - 1] = true;
    }

    int component = 0;

    for(int i =0;i<N;i++){
        if(visited[i]){
            visited[i] = false;

            component++;
            recrusion(i,visited,graph);
        }
    }

    std::cout << component;

    return 0;
}