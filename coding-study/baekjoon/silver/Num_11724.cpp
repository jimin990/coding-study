#include <iostream>
#include <vector>

int N, M;

void recrusion(int j,std::vector<std::vector<bool>> &graph){

    for(int i=0;i<N;i++){
        if(graph[j][i]){
            graph[j][i] = false;
            graph[i][j] = false;
            recrusion(i,graph);
        }
    }
}

int main(void){

    std::cin >> N >> M;

    std::vector<std::vector<bool>> graph(N,std::vector<bool>(N));

    for(int i =0;i<M;i++){
        int u,v;

        std::cin >> u >> v;

        graph[u - 1][v - 1] = true;
        graph[v - 1][u - 1] = true;
    }

    int component = 0;

    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){
            if(graph[i][j]){

                component++;

                graph[i][j] = false;
                graph[j][i] = false;
                recrusion(j,graph);
            }
        }
    }

    std::cout << component;

    return 0;
}