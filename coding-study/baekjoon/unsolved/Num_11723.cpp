//
//  Num_11723.cpp
//  coding-test
//
//  Created by 김지민 on 6/19/25.
//

#include <iostream>
#include <string>
#include <set>

/**
 add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
 remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
 check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
 toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
 all: S를 {1, 2, ..., 20} 으로 바꾼다.
 empty: S를 공집합으로 바꾼다.
 */

int main(void){
    
    std::ios::sync_with_stdio;
    std::cin.tie(0);
    
    std::set<int> set;
    
    int M;
    std::cin >> M;
    
    for(int i =0;i<M;i++){
        std::string command;
        
        std::cin >> command;
        
        int n;
        if(command == "add"){
            std::cin >> n;
            
            set.insert(n);
        }else if(command == "remove"){
            std::cin >> n;
            
            set.erase(n);
            
        }else if(command == "check"){
            std::cin >> n;
            
            std::cout << set.count(n);
            std::cout << "\n";
        }else if(command == "toggle"){
            std::cin >> n;
            
            if(set.count(n) == 1){
                set.erase(n);
            }else{
                set.insert(n);
            }
        }else if(command == "all"){
            set.clear();
            set = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
            
        }else{
            set.clear();
        }
        
    }
    
    
    return 0;
}

