//
//  Num_28114.cpp
//  coding-test
//
//  Created by 김지민 on 6/26/25.
//

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

int main(void){
    
    std::vector<std::pair<int,std::string>> names;
    std::vector<int> years;
    
    int year,solve;
    
    std::string name;
    
    for(int i =0; i < 3;i++){
        
        std::cin >> solve >> year >> name;
        
        years.push_back(year%100);
        
        names.push_back({solve,name});
    }
    
    std::sort(names.begin(),names.end());
    
    std::sort(years.begin(),years.end());
    
    for(int i =0; i < 3; i++){
        std::cout << years[i];
    }
    
    std::cout << "\n";
    
    for(int i =2; i >= 0; i--){
        std::cout << names[i].second[0];
    }
    
    return 0;
}
