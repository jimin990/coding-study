//
//  Num_2178.cpp
//  coding-test
//
//  Created by 김지민 on 6/11/25.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>


int main(void){
    
    int N,M;
    
    std::cin >> N >> M;
    
    std::string str;
    
    std::vector<std::vector<int>> distansces, maze;
    
    
    for(int i =0;i< N;i++){
        
        std::cin >> str;
        
        std::vector<int> maze2;
        std::vector<int> init;
        
        for(int j =0; j < M;j++){
            maze2.push_back(str[j] - '0');
            init.push_back(0);
        }
        
        maze.push_back(maze2);
        distansces.push_back(init);
    }
    
    std::queue<std::pair<int,int>> que;
    
    que.push({0,0});
    
    std::pair<int,int> pair;
    
    int x[4] = {0,1,0,-1};
    int y[4] = {1,0,-1,0};
    
    int distansce = 0;
    
    distansces[0][0] = 1;
    maze[0][0] = 0;
    
    while(!que.empty()){
        
        distansce++;
        
        pair = que.front(); que.pop();
        
        for(int i = 0;i<4;i++){
            int nx = pair.first + x[i];
            int ny = pair.second + y[i];
            
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(maze[nx][ny] == 1){
                maze[nx][ny] = 0;
                que.push({nx,ny});
                distansces[nx][ny] = distansces[pair.first][pair.second] +1;
            }
        }
    }
    
    std::cout << distansces[N-1][M-1];

    return 0;
}
