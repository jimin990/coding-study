//
//  Num_33703.cpp
//  coding-test
//
//  Created by 김지민 on 5/18/25.
//

#include <iostream>


int main(){
    
    int N;
    
    std::cin >> N;
    
    
    long long result = 0;
    
    for(int i = N;0<i;i--){
        
        result += i;
    }
    
    std::cout << result;
    
    return 0;
}
