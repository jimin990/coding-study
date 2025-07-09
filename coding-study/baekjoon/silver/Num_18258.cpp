//
//  Num_18258.cpp
//  coding-test
//
//  Created by 김지민 on 5/22/25.
//


/**
 push X: 정수 X를 큐에 넣는 연산이다.
 pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 size: 큐에 들어있는 정수의 개수를 출력한다.
 empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
 front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 */

#include <queue>
#include <string>
#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N;
    std::cin >> N;
    
    std::queue<int> que;
    std::string command;
    
    for(int i=0; i<N;i++){
        
        std::cin >> command;
        
        if(command == "push"){
            int X;
            std::cin >> X;
            
            que.push(X);
            
        }else if(command == "pop"){
            
            if(que.empty()){
                std::cout << "-1";
            }else{
                std::cout << que.front();
                que.pop();
            }
            
            std::cout << "\n";
            
        }else if(command == "size"){
            
            std::cout << que.size();
            std::cout << "\n";
            
        }else if(command == "empty"){
            
            std::cout << que.empty();
            std::cout << "\n";
            
        }else if(command == "front"){
            
            if(que.empty()){
                std::cout << "-1";
            }else{
                std::cout << que.front();
            }
            
            std::cout << "\n";
            
        }else if(command == "back"){
            
            if(que.empty()){
                std::cout << "-1";
            }else{
                std::cout << que.back();
            }
            
            std::cout << "\n";
        }
        
    
    }
    
    return 0;
}
