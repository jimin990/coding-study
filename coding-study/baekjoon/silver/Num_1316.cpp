//
//  Num_1316.cpp
//  coding-test
//
//  Created by 김지민 on 7/8/25.
//

#include <iostream>
#include <string>
#include <set>

int main(void){
    
    int T;
    
    std::cin >> T;
    
    int count = T;
        
    std::string str;
    std::set<char> checker;
    
    for(int i =0; i< T;i++){
        std::cin >> str;
        checker.clear();
        
        for(int j=0;j<str.length();j++){
    
            if(checker.find(str[j]) == checker.end()){
                checker.insert(str[j]);
                
                char tmp = str[j];
                
                for(;j<str.length();j++){
                    if(tmp == str[j]){
                        continue;
                    }else{
                        j--;
                        break;
                    }
                }
            }else{
                count--;
                break;
            }
        }
    }
    
    std::cout << count;
    
    return 0;
}
