//
//  Num_2696.cpp
//  coding-test
//
//  Created by 김지민 on 5/27/25.
//

#include <iostream>
#include <queue>


void insert(std::priority_queue<int>& maxQue,std::priority_queue<int>& minQue,int input){
    
    if(maxQue.empty() || maxQue.top() >= input){
        maxQue.push(input);
    }else if(maxQue.top() < input){
        minQue.push(input);
    }
    
    if(maxQue.size() - minQue.size())
}

int main(){
    
    int T;
    std::cin >> T;
    
    for(int i=0;i< T;i++){
        
        int M;
        std::cin >> M;
        
        
        
        std::priority_queue<int> maxHeap;
        std::priority_queue<int, std::vector<int>,std::greater<int>> minHeap;
        
        
    }
    
    
    
    
    return 0;
}
