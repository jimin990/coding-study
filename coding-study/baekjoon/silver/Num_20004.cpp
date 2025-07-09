//
//  Num_20004.cpp
//  coding-test
//
//  Created by 김지민 on 5/20/25.
//

#include <iostream>

int main(){
    
    int A;
    std::cin >> A;
    
    for(int i=1;i <=A;i++){
        
        if(30 % (i+1) == 0){
            std::cout << i << "\n";
        }
    }
    
    
    return 0;
}
