//
//  Num_14382.cpp
//  coding-test
//
//  Created by 김지민 on 5/12/25.
//

#include <iostream>
#include <set>

int main(){
    
    int T;
    
    std::cin >> T;
    
    for(int i = 1; i <= T; i++){
        
        int N;
        
        std::cin >> N;
        
        if(N == 0){
            
            std::cout << "Case #"<< i << ": "<< "INSOMNIA" << "\n";
            continue;
        }
        
        std::set<int> set;
        
        for(int j = 0; j < 10;j++){
            set.insert(j);
        }
        
        
        int count = 1;
        while(true){
        
            int tmp = N * count;
            
            while(tmp != 0){
                set.erase(tmp%10);
                tmp=tmp/10;
                
            }
            
            if(set.size() == 0){
                
                std::cout << "Case #"<< i << ": " << N * count << "\n";
                break;
            }
            
            count++;
            
        }
        
    }
    
    return 0;
}
