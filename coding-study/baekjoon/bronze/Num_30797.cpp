//
//  Num_30797.cpp
//  coding-test
//
//  Created by 김지민 on 5/21/25.
//

#include <iostream>

int main(){
    
    int T,N;
    
    std::cin >> T >> N;
    
    int F;
    for(int i=0;i<N;i++){
        std::cin >> F;
        
        T-=F;
    }
    
    if(T <= 0){
        std::cout << "Padaeng_i Happy";
    }else{
        std::cout << "Padaeng_i Cry";
    }
    
    
    return 0;
}
