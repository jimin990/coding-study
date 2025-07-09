//
//  Num_27889.cpp
//  coding-test
//
//  Created by 김지민 on 6/11/25.
//

#include <iostream>
#include <string>

int main(void){
    
    
    std::string str;
    std::cin >> str;
    
    if(str == "NLCS"){
        str = "North London Collegiate School";
    }else if(str == "BHA"){
        str = "Branksome Hall Asia";
    }else if(str == "KIS"){
        str = "Korea International School";
    }else if(str == "SJA"){
        str = "St. Johnsbury Academy";
    }
    
    
    std::cout << str;
    return 0;
}
