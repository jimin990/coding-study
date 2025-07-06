//
//  Num_2738.cpp
//  coding-test
//
//  Created by 김지민 on 7/6/25.
//

#include <iostream>

int main(void){
    
    int N,M;
    std::cin >> N >> M;
    
    int** arr1 = new int*[N];
    
    for(int i =0;i<N;i++){

        int* arr1p = new int[M];
        for(int j =0;j<M;j++){
            std::cin >> arr1p[j];
        }
        
        arr1[i] = arr1p;
    }
    
    int input;
    
    for(int i =0;i<N;i++){
        for(int j =0;j<M;j++){
            std::cin >> input;
            arr1[i][j]+=input;
        }
    }
    
    for(int i =0;i<N;i++){
        for(int j =0;j<M;j++){
            std::cout << arr1[i][j] << " ";
        }
        
        std::cout << "\n";
    }
    
    
    return 0;
}
