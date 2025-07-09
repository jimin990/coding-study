//
//  Num_19948.cpp
//  coding-test
//
//  Created by 김지민 on 5/27/25.
//

#include <iostream>
#include <string>
#include <sstream>


int main(){
    
    std::string poem;
    
    std::getline(std::cin,poem);
    
    int N,count = 0;
    std::cin >> N;
    
    int alphabet[26];
    
    std::fill(alphabet,alphabet+26,0);
    
    for(int i=0;i < 26;i++){
        
        int input;
        std::cin >> input;
        alphabet[i] = input;
    }
    
    std::istringstream ss(poem);
    
    std::string title, token;
    
    while(ss >> token){
        count++;
        
        title.push_back(std::toupper(token.front()));
        
        for(int i=0;i < token.size();i++){
            
            if( i != 0){
                if(token[i] == token[i-1]){
                    continue;
                }
            }
            
            char lower = std::tolower(token[i]);
            
            if(--alphabet[lower-97] < 0){
                
                std::cout << -1;
                return 0;
            }
            
        }
    }
    
    if(count-1 > N){
        std::cout << -1;
    }else{
        
        for(int i=0;i < title.size();i++){
            
            if( i != 0){
                if(title[i] == title[i-1]){
                    continue;
                }
            }
            
            char lower = std::tolower(title[i]);
            
            if(--alphabet[lower-97] < 0){
                
                std::cout << -1;
                return 0;
            }
            
        }
        
        std::cout << title;
    }
    
    return 0;
}
