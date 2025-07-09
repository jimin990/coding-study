//
//  Num_1926.cpp
//  coding-test
//
//  Created by 김지민 on 6/10/25.
//

#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>

int main(void){
    
    std::queue<std::pair<int,int>> bfs;
    
    int n,m;
    
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> v1;
    
    int num;
    
    for(int i =0;i<n;i++){
        
        std::vector<int> v2;
        
        for(int j =0;j<m;j++){
            
            std::cin >> num;
            
            v2.push_back(num);
        }
        
        v1.push_back(v2);
        
    }
    
    int x[4] = {1 , 0 , -1 , 0};
    int y[4] = {0 , 1 , 0 ,  -1};
    
    int result = 0,max = 0;;
    
    for(int j = 0;j<n;j++){
        for(int k = 0; k < m;k++){
            
            if(v1[j][k] == 1){
                
                int maxN = 1;
                result++;
                bfs.push({j,k});
                
                v1[j][k] = 0;
                
                while(!bfs.empty()){
                    
                    std::pair<int,int> pair = bfs.front();
                    bfs.pop();
                    
                    for(int i =0;i<4;i++){
                        int nx = pair.first + x[i];
                        int ny = pair.second + y[i];
                        
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
                        if(v1[nx][ny] == 1){
                            v1[nx][ny] = 0;
                            maxN++;
                            bfs.push({nx,ny});
                        }
                        
                    }
                    
                }
                
                if(max < maxN){
                    max = maxN;
                }
            }
        }
    }
    
    std::cout << result << "\n" << max;
    
    return 0;
}
