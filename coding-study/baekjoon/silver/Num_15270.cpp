//
//  Num_15270.cpp
//  coding-test
//
//  Created by 김지민 on 6/2/25.
//

#include <iostream>
#include <unordered_set>

int main(void){
    
    int N,M,v,u,student = 0;
    
    std::cin >> N >> M;
    
    std::unordered_set<int> set;
    
    for(int i =0; i < M;i++){
        
        std::cin >> v >> u;
        
        if(set.count(v) == 0 && set.count(u) == 0){
            
            set.insert(v);
            set.insert(u);
            
            student+=2;
            
        }
    }
    
    if(student % 2 == 0 && student < N){
        
        std::cout << student + 1;
    }else{
        std::cout << student;
    }
    
    return 0;
}
