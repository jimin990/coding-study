//
//  Num_11729.cpp
//  coding-test
//
//  Created by 김지민 on 6/20/25.
//

#include <iostream>
#include <cmath>

void hanoi(int n, int A, int B){
    
    if(n == 1){
        std::cout << A << " " << B << "\n";
    }else{
     
        hanoi(n-1,A,6-A-B);
        
        hanoi(1,A,B);
        
        hanoi(n-1,6-A-B,B);
        
    }
}

int main(void){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    std::cout << static_cast<int>(std::pow(2,n)) - 1 << "\n";
    
    hanoi(n,1,3);
    
    return 0;
}
