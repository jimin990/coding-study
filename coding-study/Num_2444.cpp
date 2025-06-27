//
//  Num_2444.cpp
//  coding-test
//
//  Created by 김지민 on 6/27/25.
//

#include <iostream>

int main(void){
    
    int n;
    
    std::cin >> n;
    
    n = 2*n -1;
    
    for(int i =1; i<= n/2;i++){
        
        int tmp = (n - (2*i - 1) ) / 2;
        
        for(int j = 1;j<=tmp;j++){
            std::cout << " ";
        }
        
        for(int j =1;j<=(2*i - 1);j++){
            std::cout << "*";
        }
        
       
        
        std::cout << "\n";
    }
    
    for(int j =1;j<=n;j++){
        std::cout << "*";
    }
    
    std::cout << "\n";
    
    for(int i =n/2; i>0 ;i--){
        
        int tmp = (n - (2*i - 1) ) / 2;
        
        for(int j = 1;j<=tmp;j++){
            std::cout << " ";
        }
        
        for(int j =1;j<=(2*i - 1);j++){
            std::cout << "*";
        }
        
        std::cout << "\n";
    }
    
    return 0;
}
