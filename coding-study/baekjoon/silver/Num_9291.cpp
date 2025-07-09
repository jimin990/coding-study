//
//  Num_9291.cpp
//  coding-test
//
//  Created by 김지민 on 5/29/25.
//

#include <iostream>
#include <algorithm>

bool answer[9];
int sudoku[9][9];

bool horizontal(){
    for(int i = 0; i < 9 ;i++){
        
        std::fill(answer,answer+9,false);
        
        for(int j =0; j < 9;j++){
            
            if(answer[sudoku[i][j]]){
                
                return false;
                
            }else{
                answer[sudoku[i][j]] = true;
            }
            
            
        }
        
    }
    
    return true;
}

bool vertical(){
    
    for(int i = 0; i < 9;i++){
        
        std::fill(answer,answer+9,false);
        
        for(int j =0; j < 9;j++){
            
            if(answer[sudoku[j][i]]){
                
                return false;
            }else{
                answer[sudoku[j][i]] = true;
            }
            
            
        }
    }
    
    return true;
}

bool square(){
    for(int i = 0; i < 9  ;i+=3){
        for(int j =0; j < 9 ;j+=3){
            
            std::fill(answer,answer+9,false);
            
            for(int k = i; k < i+3;k++){
                for(int l = j; l < j+3;l++){
                    
                    if(answer[sudoku[k][l]]){
                        
                        return false;
                    }else{
                        answer[sudoku[k][l]] = true;
                    }
                    
                }
            }
        }
    }
    
    return true;
}

int main(){
    
    int T;
    std::cin >> T;
    
    for(int tCase = 1; tCase <= T; tCase++){
        
        int num;
        for(int i = 0; i < 9; i++){
            for(int j =0; j < 9; j++){
                std::cin >> num;
                sudoku[i][j] = num-1;
            }
        }
        
        bool state = true;
        
        state = horizontal() && vertical() && square();
        
        if(state){
            std::cout << "Case " << tCase << ": CORRECT";
        }else{
            std::cout << "Case " << tCase << ": INCORRECT";
        }
        
        std::cout << "\n";
        
    }
    
    return 0;
}
