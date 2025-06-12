//
//  Num_14914.cpp
//  coding-test
//
//  Created by 김지민 on 6/12/25.
//

#include <iostream>

int main(void){
    
    int a,b;
    
    std::cin >> a >> b;
    
    for(int i = 1;i<= 1000;i++){
        if(a % i == 0 && b % i == 0){
            
            std::cout << i << " " << a/i << " " << b/i;
            std::cout << "\n";
        }
    }
    
    return 0;
}
