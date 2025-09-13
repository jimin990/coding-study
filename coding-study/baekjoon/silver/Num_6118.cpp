#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>

int main(void){

    int N,M;

    std::cin >> N >> M;

    std::vector<std::vector<int>> farm(N);
    std::vector<int> len(N,0);

    for(int i=0;i<M;i++){
        int x,y;
        std::cin >> x >> y;

        farm[x-1].push_back(y-1);
        farm[y-1].push_back(x-1);
    }

    std::vector<bool> visited(N,false);

    visited[0] = true;

    int max = 0;

    std::queue<int> que;

    que.push(0);

    while(!que.empty()){

        int j = que.front(); que.pop();

        for(int i=0;i<farm[j].size();i++){
            if(!visited[farm[j][i]]){
                
                que.push(farm[j][i]);

                len[farm[j][i]] = len[j] + 1;

                visited[farm[j][i]] = true;

                max = std::max(max,len[farm[j][i]]);
            }
        }
    }

    
    int count = 0;

    bool status = true;

    int pos = 0;

    for(int i =0;i<N;i++){

        if(len[i] == max){
            count++;

            if(status){
                pos = i + 1;
                status = false;
            }
        }
    }

    std::cout << pos << " " << max << " " << count;
    

    return 0;
}