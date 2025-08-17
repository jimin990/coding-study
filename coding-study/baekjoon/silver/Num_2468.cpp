#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

int main(void){

    int N;
    std::cin >> N;

    std::vector<std::vector<int>> safe_zone(N,std::vector<int>(N));

    int result = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            std::cin >> safe_zone[i][j];
        }
    }

    int x[4] = {1,0,-1,0};
    int y[4] = {0,1,0,-1};

    for(int i = 0;i<=100;i++){

        std::vector<std::vector<int>> tmp_zone(N,std::vector<int>(N,0));

        int zone = 0;

        for(int j =0;j<N;j++){
            for(int k =0;k<N;k++){

                if(safe_zone[j][k] > i && tmp_zone[j][k] == 0){

                    zone++;

                    std::queue<std::pair<int,int>> que;

                    que.push({j,k});

                    tmp_zone[j][k] = 1;

                    while(!que.empty()){

                        std::pair<int,int> p = que.front(); que.pop();
                        
                        for(int l = 0;l<4;l++){
                            int mx = x[l] + p.first;
                            int my = y[l] + p.second;

                            if(mx < 0 || mx >= N || my < 0 || my >= N) continue;
                            if(tmp_zone[mx][my] == 0 && safe_zone[mx][my] > i){
                                tmp_zone[mx][my] = 1;
                                que.push({mx,my});
                            }
                            
                        }

                    }

                }

            }
        }

        result = std::max(result, zone);
    }

    std::cout << result;
 }
