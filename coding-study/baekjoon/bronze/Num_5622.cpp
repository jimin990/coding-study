//
//  Num_5622.cpp
//  coding-test
//
//  Created by 김지민 on 6/25/25.
//

#include <iostream>
#include <string>

int main(void){
    
    int time = 0;
    std::string dial;
    std::cin >> dial;
    
    for(int i =0;i<dial.size();i++){
        char num = dial[i];
        
        if(num == 'A' || num == 'B' || num == 'C'){
            time+=3;
        }else if(num == 'D' || num == 'E' || num == 'F'){
            time+=4;
        }else if(num == 'G' || num == 'H' || num == 'I'){
            time+=5;
        }else if(num == 'J' || num == 'K' || num == 'L'){
            time+=6;
        }else if(num == 'M' || num == 'N' || num == 'O'){
            time+=7;
        }else if(num == 'P' || num == 'Q' || num == 'R' || num == 'S'){
            time+=8;
        }else if(num == 'T' || num == 'U' || num == 'V'){
            time+=9;
        }else if(num == 'W' || num == 'X' || num == 'Y' || num == 'Z'){
            time+=10;
        }else{
            time+=11;
        }
    }
    
    std::cout << time;
    
    return 0;
}
