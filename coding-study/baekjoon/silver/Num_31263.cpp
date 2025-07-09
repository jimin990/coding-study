//
//  Num_31263.cpp
//  coding-test
//
//  Created by 김지민 on 5/28/25.
//

#include <iostream>
#include <string>

int main(){
    
    std::string str;
    
    int N;
    std::cin >> N >> str;
    
    int count = 0;
    
    int front = 0, end = 3;
    
    while(front < str.size()){
        
        if(front + end < str.size()){
            if(str[front+end] == '0'){
                end--;
                continue;
            }
        }else if(front + end-1 >= str.size()){
            end--;
            continue;
        }
        
        int s = std::stoi(str.substr(front,end));
        
        if(s <= 641){
            count++;
            front+=end;
            end=3;
            
        }else{
            end--;
        }
        
    }
    
    std::cout << count;
    return 0;
}
