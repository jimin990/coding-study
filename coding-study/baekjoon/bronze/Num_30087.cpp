//
//  Num_30087.cpp
//  coding-test
//
//  Created by 김지민 on 5/28/25.
//

/**
 Algorithm    204
 DataAnalysis    207
 ArtificialIntelligence    302
 CyberSecurity    B101
 Network    303
 Startup    501
 TestStrategy    105
 */
#include <iostream>
#include <string>
int main(){
    
    int N;
    
    std::cin >> N;
    
    for(int i=0;i < N;i++){
        std::string str;
        std::cin >> str;
        
        if(str == "Algorithm"){
            std::cout << "204" << "\n";
        }else if(str == "DataAnalysis"){
            std::cout << "207" << "\n";
        }else if(str == "ArtificialIntelligence"){
            std::cout << "302" << "\n";
        }else if(str == "CyberSecurity"){
            std::cout << "B101" << "\n";
        }else if(str == "Network"){
            std::cout << "303" << "\n";
        }else if(str == "Startup"){
            std::cout << "501" << "\n";
        }else if(str == "TestStrategy"){
            std::cout << "105" << "\n";
        }
        
    }
    
    return 0;
}
