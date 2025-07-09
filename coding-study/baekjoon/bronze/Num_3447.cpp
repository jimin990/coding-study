//
//  Num_3447.cpp
//  coding-test
//
//  Created by 김지민 on 5/28/25.
//

#include <iostream>
#include <string>

int main(){
    
    std::string codes ="";
    
    std::string str;
    while(std::getline(std::cin,str)){
        
        while(str.find("BUG") != std::string::npos){
        
            str.erase(str.find("BUG"),3);
        }
        
        codes.append(str + "\n");
    }
    
    std::cout <<codes;
    
    return 0;
}
