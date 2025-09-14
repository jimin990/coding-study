#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main(void){

    int N,M;
    
    std::cin >> N >> M;

    std::vector<std::vector<int>> arr(N);

    for(int i=0;i<M;i++){
        int x,y;

        std::cin >> x >> y;

        arr[y-1].push_back(x-1); 
    }

    std::vector<int> max_arr(N);

    int max_tmp = 0;
    for(int i =0;i<N;i++){
                
                std::vector<bool> visited(N,false);
                 std::queue<int> que; 

                visited[i] = true;

                que.push(i);

                while(!que.empty()){
                    
                    int q = que.front(); que.pop();

                    for(int l =0;l<arr[q].size();l++){
                        if(!visited[arr[q][l]]){

                            max_arr[i]++;

                            que.push(arr[q][l]);

                            visited[arr[q][l]] = true;
                        }
                    }
                }

                max_tmp = std::max(max_tmp,max_arr[i]);
    }

    for(int i =0;i<N;i++){

        if(max_tmp == max_arr[i]){
            std::cout << i + 1 << " ";
        }
        
    }
    return 0;
}