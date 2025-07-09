//
//  Num_2309.cpp
//  coding-test
//
//  Created by 김지민 on 5/28/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    
    int n,sum = 0;
    
    std::vector<int> arr;
    
    for(int i =0;i<9;i++){
        std::cin >> n;
        arr.push_back(n);
        sum+=n;
    }
    
    int num1 = 0;
    int num2 = 1;
    
    for(int i =0;i<9;i++){
        
        for (int j=i+1; j<9; j++) {
            
            
            if(sum-(arr[i]+arr[j]) == 100){
                
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    
    std::sort(arr.begin(),arr.end());
    
    for(int i =0;i<9;i++){
        
        if(arr[i] != num1 && arr[i] != num2){
            std::cout << arr[i] << "\n";
        }
    }
    
    return 0;
}
