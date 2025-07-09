//
//  Num_7576.cpp
//  coding-test
//
//  Created by 김지민 on 6/11/25.
//

#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main(void){
    
    int M,N;
    
    std::cin >> M >> N;
    
    std::vector<std::vector<int>> tomatos;
    
    std::queue<std::pair<int,int>> que;
    
    for(int i = 0; i< N;i++){
        std::vector<int> tmp;
        
        int t;
        for(int j =0;j<M;j++){
            std::cin >> t;	
            
            if(t == 1){
                que.push({i,j});
                
            }
            tmp.push_back(t);
        }
        
        tomatos.push_back(tmp);
    }
    
    int x[4] = {0,1,0,-1};
    int y[4] = {1,0,-1,0};
    
    while(!que.empty()){
        
        std::pair<int,int> pair = que.front(); que.pop();
        
        for(int i =0;i<4;i++){
            int nx = pair.first + x[i];
            int ny = pair.second + y[i];
            
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(tomatos[nx][ny] == 0 && tomatos[nx][ny] != -1){
                tomatos[nx][ny] = tomatos[pair.first][pair.second] + 1;
                que.push({nx,ny});
            }
        }
        
    }
    
    


    
    int max = 0;
    for(int i =0;i<N;i++){
        for(int j =0;j<M;j++){
            if(tomatos[i][j] == 0){
                std::cout << -1;
                return 0;
            }
            
            if(max < tomatos[i][j]){
                max = tomatos[i][j];
            }
        }
    }
    
    std::cout << max - 1;
    
    return 0;
}
