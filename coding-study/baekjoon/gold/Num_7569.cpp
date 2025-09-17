#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

int main(void){

    int M,N,H;

    std::cin >> M >> N >> H;

    std::vector<std::vector<std::vector<int>>> tomatos(H,std::vector<std::vector<int>>(N,std::vector<int>(M,-1)));

    std::queue<std::pair<int,std::pair<int,int>>> que;

    int count = 0;

    for(int z =0;z<H;z++){
        for(int y =0;y<N;y++){
            for(int x =0;x<M;x++){

                int tomato_status;

                std::cin >> tomato_status;

                tomatos[z][y][x] = tomato_status;

                if(tomato_status == 1){
                    que.push({z,{y,x}});
                }else if(tomato_status == 0){
                    count++;
                }
                
            }
        }
    }

    int max_tmp = -1;

    int i[6] = {0, 1, 0,-1, 0, 0};
    int j[6] = {1, 0,-1, 0, 0, 0};
    int k[6] = {0, 0, 0, 0, 1,-1};

    while(!que.empty()){

        std::pair<int,std::pair<int,int>> p = que.front(); que.pop();

        for(int l =0;l<6;l++){
            int mz = p.first + k[l];
            int my = p.second.first + j[l];
            int mx = p.second.second + i[l];

            if(mz >= H || mz < 0 || my >= N || my < 0 || mx >= M || mx < 0) continue;
            if(tomatos[mz][my][mx] == 0 && tomatos[mz][my][mx] != -1){
                tomatos[mz][my][mx] = tomatos[p.first][p.second.first][p.second.second] + 1;

                que.push({mz,{my,mx}});

                max_tmp = std::max(max_tmp,tomatos[mz][my][mx]);

                count--;
            }
        }
    }

    if(count > 0){
        std::cout << -1;
    }else if(max_tmp == -1){
        std::cout << 0;
    }else{
        std::cout << max_tmp - 1;
    }

    
    return 0;
}