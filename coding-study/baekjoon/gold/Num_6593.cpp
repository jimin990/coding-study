#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>

int main(void){

    int L,R,C;

    while(true){

        std::cin >> L >> R >> C;

        if(L == 0 && R == 0 && C == 0) break;

        std::vector<std::vector<std::vector<char>>> building(L,std::vector<std::vector<char>>(R,std::vector<char>(C)));
        std::vector<std::vector<std::vector<int>>> building_len(L,std::vector<std::vector<int>>(R,std::vector<int>(C,0)));
        std::queue<std::pair<int,std::pair<int,int>>> que;

        for(int z = 0;z<L;z++){
            for(int y=0;y<R;y++){
                for(int x=0;x<C;x++){

                    std::cin >> building[z][y][x];
                    if(building[z][y][x] == 'S'){
                        que.push({z,{y,x}});
                    }
                }
            }
        }

        int x[6] = {0, 1, 0,-1, 0, 0};
        int y[6] = {1, 0,-1, 0, 0, 0};
        int z[6] = {0, 0, 0, 0, 1,-1};

        int escape_status = 0;

        while(!que.empty()){

            std::pair<int,std::pair<int,int>> p = que.front(); que.pop();

            for(int i=0;i<6;i++){
                int mz = p.first + x[i];
                int my = p.second.first + y[i];
                int mx = p.second.second + z[i];

                if(mz >= L || mz < 0 || my >= R || my < 0 || mx >=C || mx < 0) continue;
                if(building[mz][my][mx] == '.' && building_len[mz][my][mx] == 0){
                    building_len[mz][my][mx] = building_len[p.first][p.second.first][p.second.second] + 1;

                    que.push({mz,{my,mx}});
                }

                if(building[mz][my][mx] == 'E' && building_len[mz][my][mx] == 0){
                    escape_status = building_len[p.first][p.second.first][p.second.second] + 1;
                    break;
                }
            }

        }

        if(escape_status == 0){
            std::cout << "Trapped!" << "\n";
        }else{
            std::cout << "Escaped in " <<  escape_status << " minute(s)." << "\n";
        }

    }

    return 0;
}       