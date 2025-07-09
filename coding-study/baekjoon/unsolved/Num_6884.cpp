//
//  Num_6884.cpp
//  coding-test
//
//  Created by 김지민 on 5/20/25.
//

#include <iostream>
#include <string>

int main(){
    
    
    int che[100000001];
    
    for(int i=1;i<100000001;i++){
        che[i] = 1;
    }
    
    for(int i=2;i<100000001;i++){
        for(int j =i; j*2 < 100000001;j*=2){
            che[j] = 0;
        }
    }
    
    int t;
    std::cin >> t;
    
    for(int i = 0; i<t; i++){
        
        int n;
        std::cin >> n;
        
        std::cin.ignore();
        
        char str[n*2];
        std::cin.getline(str,n*2);
        
        for(int j =2;j<n;j++){
            
            int sum = 0;
            for(int k = 1; k<j*2;k+2){
                sum += str[k];
            }
            
            
        }
        
    }
    
    
    return 0;
}
