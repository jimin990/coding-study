//
//  Num_11867.cpp
//  coding-test
//
//  Created by 김지민 on 6/10/25.
//

#include <iostream>

int main(void){
    
    int box1, box2, player = 1;
    
    std::cin >> box1 >> box2;
    
    
    
    
    return 0;
}

int select_first(int first_box, int second_box,int player){
    
    first_box = second_box / 2 + second_box % 2;
    
    second_box = second_box / 2;
    
    //bool first = false, second = false;
    
    if(first_box >= 2){
        return select_first( first_box, second_box, ++player);
    }else{
        
    }
}
