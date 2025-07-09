//
//  Num_4179.cpp
//  coding-test
//
//  Created by 김지민 on 6/11/25.
//

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <climits>

int main(void){
    
    int R, C;
    std::cin >> R >> C;
    
    std::vector<std::vector<char>> maze(R,std::vector<char>(C));
    std::vector<std::vector<int>> maze_Fdistance(R,std::vector<int>(C,-1));
    std::vector<std::vector<int>> maze_Jdistance(R,std::vector<int>(C,-1));
    
    std::queue<std::pair<int,int>> que;
    
    char c;
    
    std::pair<int,int> J;
    
    for(int i =0 ;i < R;i++){
        
        for(int j =0; j< C;j++){
            
            std::cin >> c;
            
            maze[i][j] = c;
            
            if(c == 'F'){
                que.push({i,j});
                maze_Fdistance[i][j] = 0;
            }else if(c == 'J'){
                J = {i,j};
                maze_Jdistance[i][j] = 0;
            }
        }
    }
    
    int x[4] = {0,1,0,-1};
    int y[4] = {1,0,-1,0};
    
    while(!que.empty()){
        std::pair<int,int> pair = que.front(); que.pop();
        
        for(int i =0; i< 4;i++){
            int dx = pair.first + x[i];
            int dy = pair.second + y[i];
            
            
            if(dx < 0 || dx >= R || dy < 0 || dy >= C) continue;
            if(maze[dx][dy] != '#' && maze_Fdistance[dx][dy] < 0){
                maze_Fdistance[dx][dy] = maze_Fdistance[pair.first][pair.second] + 1;
                que.push({dx,dy});
            }
        }
        
    }
    
    que.push(J);
    
    while(!que.empty()){
        std::pair<int,int> pair = que.front(); que.pop();
        
        for(int i =0; i< 4;i++){
            int dx = pair.first + x[i];
            int dy = pair.second + y[i];
            
            if(dx < 0 || dx >= R || dy < 0 || dy >= C) continue;
            if(maze[dx][dy] != '#' && maze_Jdistance[dx][dy] < 0){
                maze_Jdistance[dx][dy] = maze_Jdistance[pair.first][pair.second] + 1;
                que.push({dx,dy});
            }
        }
        
    }
    
    int min = INT_MAX;
    
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if((i == 0 || i == R-1 || j == 0 || j == C-1) &&  // 경계
               maze[i][j] != '#' &&                          // 벽 아님
               maze_Jdistance[i][j] != -1 &&                 // J가 갈 수 있는 곳
               (maze_Fdistance[i][j] == -1 || maze_Jdistance[i][j] < maze_Fdistance[i][j])){  // 불보다 먼저
                min = std::min(min, maze_Jdistance[i][j]);
            }
        }
    }

    
    if(min == INT_MAX){
        std::cout << "IMPOSSIBLE";
    }else{
        std::cout << min + 1;
    }
    
    return 0;
}

