#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

int main(void){

    int N;

    std::cin >> N;

    bool status = true;

    std::vector<std::vector<int>> friends(N);

    std::vector<int> len(N,0);

    int min_tmp = INT_MAX;

    int count = 1;

    while(status){

        int A,B;

        std::cin >> A >> B;

        if(A == -1 && B == -1) break;

        friends[A-1].push_back(B-1);
        friends[B-1].push_back(A-1);
    }

    for(int i =0;i<N;i++){

        std::queue<int> que;

        std::vector<int> visited(N,false);

        std::vector<int> len_tmp(N,0);

        que.push(i);

        visited[i] = true;

        while(!que.empty()){

            int q = que.front(); que.pop();

            for(int j=0;j<friends[q].size();j++){
                if(!visited[friends[q][j]]){
                    que.push(friends[q][j]);

                    visited[friends[q][j]] = true;

                    len_tmp[friends[q][j]] = len_tmp[q] + 1;

                    len[i] = std::max(len[i],len_tmp[friends[q][j]]);
                }
            }
        }

        if(min_tmp == len[i]){
            count++;
        }else if(min_tmp > len[i]){
            min_tmp = len[i];
            count = 1;
        }

    }

    std::cout << min_tmp << " " << count << "\n";

    for(int i =0;i<N;i++){
        if(min_tmp == len[i]){
            std::cout << i +1 << " ";
        }

    }

    return 0;
}