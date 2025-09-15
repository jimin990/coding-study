#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <climits>

int main(void){

    int N, M;

    std::cin >> N >> M;

    std::vector<std::vector<int>> arr(N);

    for(int i =0;i<M;i++){
        int A,B;

        std::cin >> A >> B;

        arr[A-1].push_back(B-1);
        arr[B-1].push_back(A-1);
    }

    std::vector<int> kavin(N,0);

    int min_len = INT_MAX;

    for(int i = 0;i<N;i++){
        std::vector<bool> visited(N,false);

        std::queue<int> que;

        std::vector<int> len(N,0);

        que.push(i);

        visited[i] = true;

        int sum_len = 0;

        while(!que.empty()){

            int q= que.front(); que.pop();

            sum_len +=len[q];

            for(int j =0;j<arr[q].size();j++){
                
                if(!visited[arr[q][j]]){
                    que.push(arr[q][j]);

                    visited[arr[q][j]] = true;

                    len[arr[q][j]] = len[q] + 1;

                }
            }
        }

        kavin[i] = sum_len;

        min_len = std::min(min_len,kavin[i]);

    }


    for(int i =0;i<N;i++){

        if(min_len == kavin[i]){

            std::cout << i + 1;
            break;
        }
    }

    return 0;
}