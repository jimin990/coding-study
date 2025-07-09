//
//  Num_2711.cpp
//  coding-test
//
//  Created by 김지민 on 7/2/25.
//

#include <iostream>
#include <string>

int main(void){
    
    int T,n;
    std::string str;
    
    std::cin >> T;
    
    for(int i =0;i < T;i++){
        std::cin >> n >> str;
        
        for(int j =0;j<str.size();j++){
            if(j != n-1){
                std::cout << str[j];
            }
        }
        
        std::cout << "\n";
        
    }
    
    return 0;
}
