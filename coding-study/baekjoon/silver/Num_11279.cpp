#include <iostream>
#include <queue>

int main(void){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    std::priority_queue<int> que;

    for(int i=0;i<N;i++){
        int input;

        std::cin >> input;

        if(input == 0){

            if(que.empty()){
                std::cout << "0" << "\n";
            }else{
                std::cout << que.top() << "\n";
                que.pop();
            } 

        }else{
            que.push(input);
        }
    }
    
    return 0;
}