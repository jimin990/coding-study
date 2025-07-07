//
//  Num_10798.cpp
//  coding-test
//
//  Created by 김지민 on 7/7/25.
//

#include <iostream>
#include <string>

int main(void){
    
    char** arr = new char*[5];
    
    std::string str;
    
    for(int i=0;i<5;i++){
        
        std::cin >> str;
        
        char* arr1 = new char[15];
        
        for(int j=0;j<str.length();j++){
            arr1[j] = str[j];
        }
        
        for(int j=str.length();j<15;j++){
            arr1[j] = ',';
        }
        
        arr[i] = arr1;
    }
    
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            if(arr[j][i] != ','){
                std::cout << arr[j][i];
            }
        }
    }

    return 0;
}


