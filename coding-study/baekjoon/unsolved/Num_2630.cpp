//
//  Num_2630.cpp
//  coding-test
//
//  Created by 김지민 on 6/25/25.
//

#include <iostream>

int main(void){
    
    int N;
    std::cin >> N;
    
    int **arr = new int*[N];
    int num = 0;
    
    for(int i =0; i< N;i ++){
        
        for(int j =0;j<N;j++){
            std::cin >> num;
            
            arr[i][j] = num;
        }
    }
    
    for(int i =0; i< N;i ++){
        
        for(int j =0;j<N;j++){
            
            std::cout << arr[i][j];
        }
        
        std::cout << "\n";
    }
    
    
    
    
    return 0;
}
