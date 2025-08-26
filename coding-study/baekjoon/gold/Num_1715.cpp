#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>

int main(void){

    int N;

    std::cin >> N;

    std::priority_queue<int,std::vector<int>,std::greater<int>> que;

    int input;

    for(int i =0;i<N;i++){
        
        std::cin >> input;

        que.push(input);
    }

    long long result = 0;

    if(N != 1){
        while(que.size() > 1){
            int A = que.top(); que.pop();

            int B = que.top(); que.pop();

            int tmp = A + B;

            result += tmp;

            que.push(tmp);
        }
    }
    
    std::cout << result;
    
    return 0;
}