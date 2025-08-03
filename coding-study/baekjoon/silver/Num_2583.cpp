#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>

int main(void){
    
    /**
     * 5 7 3
0 2 4 4
1 1 2 5
4 0 6 2
     */

    int M,N,K;

    std::cin >> M >> N >> K;

    std::vector<std::vector<int>> paper(M,std::vector<int>(N,0));

    int x1,y1,x2,y2;

    for(int i =0;i<K;i++){
        std::cin >> x1 >> y1 >> x2 >> y2;

        for(int j = x1;j<x2;j++){
            for(int l = y1;l<y2;l++){
                paper[l][j] = 1;
            }
        }

    }

    int area_num = 0;
    std::vector<int> each_area_max_num;

    std::queue<std::pair<int,int>> que;

    int x[4] = {0,1,0,-1};
    int y[4] = {1,0,-1,0};

    for(int j =0;j<M;j++){
        for(int l =0;l<N;l++){

            if(paper[j][l] == 0){

                int max = 0;

                area_num++;

                que.push({j,l});

                paper[j][l] = 1;

                while(!que.empty()){

                    max++;
                    
                    std::pair<int,int> tmp = que.front(); que.pop();
                    
                    for(int o = 0;o<4;o++){
                        int my = tmp.first + y[o];
                        int mx = tmp.second + x[o];

                        if(mx < 0 || mx >= N || my < 0 || my >= M) continue;
                        if(paper[my][mx] == 0){
                            que.push({my,mx});
                            paper[my][mx] = paper[tmp.first][tmp.second] + 1;

                        }

                    }
                }

                each_area_max_num.push_back(max);
                
            }
        }
    }
    
    std::sort(each_area_max_num.begin(),each_area_max_num.end());

    std::cout << area_num << "\n";

    for(int i =0;i<each_area_max_num.size();i++){
        std::cout << each_area_max_num[i] << " ";
    }
    
    return 0;
}
