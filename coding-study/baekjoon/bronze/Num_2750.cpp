//
//  Num_2750.cpp
//  coding-test
//
//  Created by 김지민 on 6/30/25.
//

#include <iostream>
#include <algorithm>

int main(void){
    
    int N,input;
    
    std::cin >> N;
    
    int* arr = new int[N];
    
    for(int i=0;i<N;i++){
        std::cin >> input;
        
        arr[i] = input;
    }
    
    std::sort(arr,arr+N);
    
    for(int i=0;i<N;i++){
        std::cout << arr[i] << "\n";
    }
    
    return 0;
}
