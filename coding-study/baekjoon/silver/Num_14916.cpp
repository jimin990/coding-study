//
//  Num_14916.cpp
//  coding-test
//
//  Created by 김지민 on 5/22/25.
//
	
#include <iostream>

int main(){
    
    int n;
    std::cin >>n;
    
    const int COIN_2 = 2;
    const int COIN_5 = 5;
    
    int count = n / COIN_5;
    
    n -= count * COIN_5;
    
    while(n % COIN_2 != 0){
        count--;
        
        if(count < 0){
            std::cout << "-1";
            return 0;
        }
        
        n+=5;
        
    }
    
    std::cout << count + n/2;
    
    return 0;
}
