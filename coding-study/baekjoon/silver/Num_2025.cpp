#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <functional>

int main(void){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    std::priority_queue<int,std::vector<int>,std::greater<int>> que;

    long input;

    for(int i=0;i<N*N;i++){
        std::cin >> input;
        
        que.push(input);

        if(que.size() == N+1){
            que.pop();
        }
    }

    std::cout << que.top();
    
    return 0;
}
