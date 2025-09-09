#include <iostream>
#include <vector> 

void DFS(std::vector<std::vector<int>> &G, 
         std::vector<std::vector<int>> &tmp, 
         std::vector<bool> &visited, 
         int root, int cur_node, int N)
{

    for(int i =0;i<N;i++){
        if(G[cur_node][i] == 1 && !visited[i]){
            
            visited[i] = true;
            tmp[root][i] = 1;
            DFS(G,tmp,visited,root,i,N);
        }
    }

}

int main(void){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N; 

    std::vector<std::vector<int>> G(N,std::vector<int>(N,0));
    std::vector<std::vector<int>> tmp(N,std::vector<int>(N,0));

    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){
            std::cin >> G[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        std::vector<bool> visited(N, false);
        DFS(G, tmp, visited, i, i, N);
    }

    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){
            std::cout << tmp[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}