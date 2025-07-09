//
//  Num_16713.cpp
//  coding-test
//
//  Created by 김지민 on 5/13/25.
//

#include <stdio.h>
#include <iostream>
#include <vector>

int main(){
    
    
    int N,Q;
    
    std::cin >> N >> Q;
    
    std::vector<int> vector;
    
    int a;
    
    vector.push_back(0);
    
    for(int i=1;i<=N;i++){
        
        std::cin >> a;
        
        int tmp = vector[i-1] ^ a;
        
        vector.push_back(tmp);
        
    }
    
    
    int result = 0;
    
    for(int i = 0 ; i<Q; i++){
    
        int s,e;
        
        std::cin >> s >> e;
        
        result = result ^ (vector[e] ^ vector[s-1]);
        
    }
    
    
    std::cout << result << std::endl;
    
    return 0;
}
