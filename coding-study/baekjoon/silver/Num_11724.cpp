#include <iostream>
#include <vector>

int N, M;

std::vector<std::vector<bool>> graph(N,std::vector<bool>(N));

void recrusion(int j){

    for(int i=0;i<N;i++){
        if(graph[j][i]){
            graph[j][i] = false;
            recrusion(i);
        }
    }
}

int main(void){

    std::cin >> N >> M;

    for(int i =0;i<M;i++){
        int u,v;

        std::cin >> u >> v;

        graph[u - 1][v - 1] = true;
    }

    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){
            if(graph[i][j]){
                graph[i][j] = false;
                recrusion(j);
            }
        }
    }


    return 0;
}