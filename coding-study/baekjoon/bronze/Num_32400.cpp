//
//  Num_32400.cpp
//  coding-test
//
//  Created by 김지민 on 5/28/25.
//

#include <iostream>

int main(){
    
    int darts[20];
    
    float alice,bob = 0;
    int twenty = 0;
    
    
    for(int i =0;i< 20;i++){
        std::cin >> darts[i];
        bob+=darts[i];
        
        if(darts[i] == 20){
            twenty = i;
        }
    }
    
    if(twenty == 0){
        alice = darts[19] + darts[0] + darts[1];
    }else if(twenty == 19){
        alice = darts[18] + darts[19] + darts[0];
    }else{
        alice = darts[twenty-1] + darts[twenty] + darts[twenty+1];
    }
    
    bob /= 20;
    alice /= 3;
    
    if(bob == alice){
        std::cout << "Tie";
    }else if(bob > alice){
        std::cout << "Bob";
    }else{
        std::cout << "Alice";
    }
    
    return 0;
}
