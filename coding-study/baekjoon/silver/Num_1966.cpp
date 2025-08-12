#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#include <functional>
#include <vector>

int main(void){
    
    int T;
    std::cin >> T;

    while(T--){

        int N,M;

        std::cin >> N >> M;

        std::queue<std::pair<int,int>> que;

        std::vector<int> arr(N);

        int input;

        for(int i=0;i<N;i++){
            std::cin >> input;
            arr[i] = input;

            que.push({input,i});
        }

        int n = 0;
        std::sort(arr.begin(),arr.end(),std::greater<int>());

        int count = 1;
        while(true){

            std::pair<int,int> p = que.front();

            if(p.first == arr[n]){
                if(p.second == M){
                    std::cout<< count << "\n";
                    break;
                }else{
                    count++;
                    que.pop();
                    n++;
                }
            }else{
                que.pop();
                que.push(p);
            }
        }
    }

    return 0;
}