#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <string>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;

    std::cin >> N;

    std::vector<std::vector<int>> arr(N,std::vector<int>(N,0));

    for(int i =0;i < N;i++){
        
        std::string str;
        std::cin >> str;

        for(int j =0;j<N;j++){
            arr[i][j] = str[j] - '0';
        }
    }

    int x[4] = {1,0,-1,0};
    int y[4] = {0,1,0,-1};

    int count = 0;

    std::vector<int> house;

    std::queue<std::pair<int,int>> que;

    for(int i =0;i < N;i++){
        for(int j =0;j<N;j++){

            if(arr[i][j] == 1){
                
                count++;

                que.push({i,j});

                arr[i][j] = 0;

                int max = 0;

                while(!que.empty()){

                    max++;
                    std::pair<int,int> tmp = que.front(); que.pop();

                    for(int k =0;k<4;k++){
                        int nx = tmp.first + x[k];
                        int ny = tmp.second + y[k];

                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(arr[nx][ny] != 0){
                            
                            que.push({nx,ny});
                            arr[nx][ny] = 0;
                        }
                    }

                }

                house.push_back(max);
                
            }
        }
    }

    std::sort(house.begin(),house.end());

    std::cout << count << "\n";

    for(int i =0;i<house.size();i++){
        std::cout << house[i] << "\n";
    }
    
    return 0;
}