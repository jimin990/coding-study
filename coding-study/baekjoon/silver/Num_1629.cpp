//
//  Num_1629.cpp
//  coding-test
//
//  Created by 김지민 on 6/19/25.
//

#include <iostream>


int A,B,C;

int recursion(int num){
    
    if(num == 1){
        return A % C;
    }
    
    long long tmp = recursion(num/2) % C;
    
    if(num%2 == 0){
        return (tmp * tmp) % C;
    }else{
        return ((tmp * tmp) % C * (A % C) % C) % C;
    }
    
}

int main(void){
    
    std::cin >> A >> B >> C;
    
    std::cout << recursion(B) % C;;
    
    return 0;
}
